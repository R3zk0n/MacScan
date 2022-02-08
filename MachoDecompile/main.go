package main

// #cgo LDFLAGS: -framework CoreFoundation -framework IOKit
//int iosurface_utils_get_connection(const char* name);
//int enumerate_clients(const char* name);
// #include "io_utils.h"
import "C"

import (
	"database/sql"
	"fmt"
	"github.com/akamensky/argparse"
	"github.com/blacktop/go-macho"
	"github.com/fatih/color"
	_ "github.com/mattn/go-sqlite3"
	"os"
	"path/filepath"
	"regexp"
)

//C Functions.

func io_utils(service string) {
	service_string := C.CString(service)

	io_services := C.enumerate_clients(service_string)
	fmt.Println(io_services)

}

func dump_path() {
	db, err := sql.Open("sqlite3", "./XPC.db")
	check(err)
	rows, _ := db.Query("SELECT * FROM Macho WHERE Protocols LIKE '%NSXPCListener%'  --case-insensitive")
	var id int
	var Program string
	var Protocol string
	for rows.Next() {
		rows.Scan(&id, &Program, &Protocol)
		color.Red(Program)
	}
}

func query_xpc() {
	db, err := sql.Open("sqlite3", "./XPC.db")
	check(err)
	rows, _ := db.Query("SELECT * FROM Macho WHERE Protocols LIKE '%NSXPCListener%'  --case-insensitive")
	var id int
	var Program string
	var Protocol string

	for rows.Next() {
		rows.Scan(&id, &Program, &Protocol)
		color.Red("Path: " + Program)
		color.Green(Protocol)

	}
}


func PrivProcess(Path string, Protocols string) {
	db, err := sql.Open("sqlite3", "./XPC.db")
	check(err)
	statement, err := db.Prepare("CREATE TABLE IF NOT EXISTS Privs (id INTEGER PRIMARY KEY AUTOINCREMENT, Path TEXT, Protocols TEXT);")
	check(err)
	statement.Exec()
	statement, err = db.Prepare("INSERT INTO Privs (Path, Protocols) VALUES (?, ?)")
	statement.Exec(Path, Protocols)
	check(err)

}

func sqlite_macho(ProgramName string, Protocols string) {
	db, err := sql.Open("sqlite3", "./XPC.db")
	check(err)
	statement, err := db.Prepare("CREATE TABLE IF NOT EXISTS Macho (id INTEGER PRIMARY KEY AUTOINCREMENT, ProgName TEXT, Protocols TEXT);")
	check(err)
	statement.Exec()
	statement, err = db.Prepare("INSERT INTO Macho (ProgName, Protocols) VALUES (?, ?)")
	statement.Exec(ProgramName, Protocols)
	check(err)

}

func check(err error) int {
	if err != nil {
		defer func() {
			if r := recover(); r != nil {
				fmt.Printf("Recovering from panic in printAllOperations error is: %v \n", r)
			}
		}()
		fmt.Printf("Failed to parse\n")
		return 0
	}
	return 1
}

func parse_file_macho(file_path string) int {
	file, _ := os.Open(file_path)

	macho_file, err := macho.NewFile(file)
	if err != nil {
		return 1
	}
	requirements := macho_file.CodeSignature().Requirements
	fmt.Printf("Requirements: %s", requirements)

	Imported_Names, _ := macho_file.ImportedSymbolNames()
	for _, y := range Imported_Names {
		fmt.Printf("%s\n", y)
	}


	var Objprotocols, erro = macho_file.GetObjCProtocols()
	check(erro)
	for _, y := range Objprotocols {
		fmt.Printf("Objective-C: %s\n", y.Name)
		fmt.Printf("Protocols-Objective-C: %s\n", y.String())
		sqlite_macho(file.Name(), y.String())
		matched, _ := regexp.MatchString(`[pP][a-zA-Z]ivileged`, y.Name)
		if matched{
			color.Blue("[!] Found a Privileged Protocol: %s [!]", y.Name)
			color.Blue("Location: %s", file_path)
			PrivProcess(file_path,y.String());

		}

		if y.Name == "NSXPCListenerDelegate" {
			color.Red("Found XPC Listener!")
		}
	}

	fmt.Printf("\nImported Libraries\n")
	for _, y := range macho_file.ImportedLibraries() {
		color.HiWhite("%s\n", y)
	}
	fmt.Println("\nSections")
	for _, y := range macho_file.Sections {
		fmt.Printf("%s, Address: 0x%02x\n", y.Name, y.Addr)
	}

	return 0

}

func fat_parse(file_path string) int {
	file, _ := os.Open(file_path)
	fat_file, err := macho.NewFatFile(file)
	if err != nil {
		return 1

	}

	if fat_file != nil {
		color.Green("File:%s\n", file.Name())

		for _, arch := range fat_file.Arches {
			var ImportedLibs = arch.ImportedLibraries()
			for _, Imported := range ImportedLibs {
				color.HiWhite("Imported Libraries: %s", Imported)
			}

			ObjProtocols, _ := arch.GetObjCProtocols()
			for _, Protocols := range ObjProtocols {



				color.Red("[+] Protocol: %s\n", Protocols.Name)
				color.Yellow("[-]Protocols_Dump: %s\n", Protocols.String())
				sqlite_macho(file.Name(), Protocols.String())
				matched, _ := regexp.MatchString(`[pP][a-zA-Z]ivileged`, Protocols.Name)
				if matched{
					color.Blue("[!] Found a Privileged Protocol: %s [!]", Protocols.Name)
					color.Blue("Path: %s", file_path)
					PrivProcess(file_path, Protocols.String())
				}
				OptMethods := Protocols.OptionalClassMethods
				color.HiBlueString("Optional Methods: %s\n", OptMethods)

				//	if(Protocols.Name == ""){
				//		color.HiGreen("[+]Found NSXPCListener! \n")
				//		color.Cyan("File Location: %s", file.Name())

			}
		}

	}
	return 0

}

func walk_directory(path string) ([]string, error) {
	fileList := make([]string, 0)
	e := filepath.Walk(path, func(path string, f os.FileInfo, err error) error {
		fileList = append(fileList, path)
		return err
	})

	if e != nil {
		panic(e)
	}

	for _, file := range fileList {
		//fmt.Printf("File: %s\n", file)
		parse_macho := parse_file_macho(file)
		if parse_macho == 1 {
			parse_fat := fat_parse(file)
			if parse_fat == 1 {
				continue
			}

		}
	}

	return fileList, nil
}

func main() {

	//args := os.Args[1]
	parser := argparse.NewParser("Mac Scan", "Files information from OSX files.")
	d := parser.String("d", "directory", &argparse.Options{Required: false, Help: "Scan a directory..\n"})
	f := parser.String("f", "file", &argparse.Options{Required: false, Help: "Scan a file..\n"})
	i := parser.String("i", "iokit scanner", &argparse.Options{Required: false, Help: "Find IOKit services\n"})
	x := parser.String("x", "XPC", &argparse.Options{Required: false, Help: "Dump XPC Protocols\n"})
	dp := parser.String("p", "Path", &argparse.Options{Required: false, Help: "Dump Paths\n"})

	err := parser.Parse(os.Args)
	if err != nil {
		// In case of error print error and print usage
		// This can also be done by passing -h or --help flags
		fmt.Print(parser.Usage(err))
	}
	if *dp != "" {
		dump_path()
	}

	if *x != "" {
		query_xpc()
	}

	if *i != "" {
		io_utils(*i)

	}
	if *f != "" {
		color.Red("Scanning File: %s\n", *f)
		parse_macho := parse_file_macho(*f)
		if parse_macho == 1 {
			parse_fat := fat_parse(*f)
			if parse_fat == 1 {
				return

			}
		}
	}
	if *d != "" {
		color.Green("Scanning Directory: %s\n", *d)
		walk_directory(*d)

	}
}
