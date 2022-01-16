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
	"path/filepath"

	"log"
	"os"
)


//C Functions.


func io_utils(service string){
	service_string := C.CString(service)

	io_services := C.enumerate_clients(service_string)
	fmt.Println(io_services)

}


func query_xpc(){
	db, err := sql.Open("sqlite3", "./XPC.db")
	check(err)
	rows, _ := db.Query("SELECT * FROM Macho WHERE Protocols LIKE '%NSXPCListener%'  --case-insensitive")
	var id int
	var Program string
	var Protocol string

	for rows.Next(){
		rows.Scan(&id, &Program, &Protocol)
		color.Red("Path: " + Program)
		color.Green(Protocol)

	}
}


func sqlite_macho(ProgramName string, Protocols string){
	db, err := sql.Open("sqlite3", "./XPC.db")
	check(err)
	statement, err := db.Prepare("CREATE TABLE IF NOT EXISTS Macho (id INTEGER PRIMARY KEY AUTOINCREMENT, ProgName TEXT, Protocols TEXT);");
	check(err)
	statement.Exec();
	statement, err = db.Prepare("INSERT INTO Macho (ProgName, Protocols) VALUES (?, ?)")
	statement.Exec(ProgramName, Protocols)
	check(err)


	//statement, err := db.Prepare("CREATE TABLE IF NOT EXISTS Macho (id INTEGER PRIMARY KEY AUTOINCREMENT, ProgName TEXT NOT NULL UNIQUE, Protocols TEXT, ObjC TEXT, Entitlments TEXT,Sections TEXT, CS_OPS TEXT, XPC TEXT);");


}

func error_check(err error){
	if err != nil{
		log.Fatalln(err)
	}
}







/*func parse_file_macho(file_path string) int {


	disassembler := NewDisassmeber()
	defer disassembler.f.Close()
	test, err := macho.Open(file_path)
	check_error(err)
	fmt.Printf(test.CPU.String()+ "\n")
	if err != nil{
		return 1
	}
	//textsegment := disassembler.f.Segment("__TEXT")
	//fmt.Printf("%s", textsegment.String());

//	TextSegment := disassembler.f.Section("__TEXT", "__text")
//	fmt.Printf("Text Section Address: 0x%x\n", TextSegment.Addr)
//	DataSegment := disassembler.f.Section("__DATA", "__data")
//	fmt.Printf("Data Section Address: 0x%x\n", DataSegment.Addr)
	//textData, err := TextSegment.Data();
//	check_error(err);

	for addr, imports_name := range disassembler.f.ImportedLibraries(){
		fmt.Printf("Imports: %s Address: 0x%x\n", imports_name, addr);

	}
	fmt.Println("\nSections")
	for _, y := range disassembler.f.Sections{
		fmt.Printf("%s, Address: 0x%x\n", y.Name, y.Addr)
	};



	//SymNames, _ := disassembler.f.ImportedSymbols()

	symbols, err := disassembler.f.ImportedSymbols()
	check_error(err)


	symMap := make(map[ /*Address*//*symb *macho.Symbol)
	for i := range symbols {
		symMap[symbols[i].Value] = &symbols[i]
	}

	numofSym := len(symbols)
	fmt.Printf("[=] Found %d Symbols\n", numofSym);

	if disassembler.f.Symtab == nil{
		fmt.Printf("No Symtab found\n")
	}

	//var addrs []uint64
	for _, s := range disassembler.f.Symtab.Syms {
		if s.Type&stabTypeMask == 0 {
			addrs = append(addrs, s.Value)
		}
	}
	sort.Sort(uint64s(addrs))
	var syms []Sym
	for _, s := range disassembler.f.Symtab.Syms{
		if s.Type&stabTypeMask != 0 {
			continue
		}
		sym := Sym{Name: s.Name, Addr: s.Value, Code: '?'}
		i := sort.Search(len(addrs), func(x int) bool { return addrs[x] > s.Value })
		if i < len(addrs) {
			sym.Size = int64(addrs[i] - s.Value)
		}
		if s.Sect == 0 {
			sym.Code = 'U'
		} else if int(s.Sect) <= len(disassembler.f.Sections) {
			sect := disassembler.f.Sections[s.Sect-1]
			switch sect.Seg {
			case "__TEXT", "__DATA_CONST":
				sym.Code = 'R'
			case "__DATA":
				sym.Code = 'D'
			}
			switch sect.Seg + " " + sect.Name {
			case "__TEXT __text":
				sym.Code = 'T'
			case "__DATA __bss", "__DATA __noptrbss":
				sym.Code = 'B'
			}
		}
		syms = append(syms, sym)
	}
	for _,q := range syms{
		fmt.Printf("Symbol: %s\n", q.Name)
		fmt.Printf("Address: %d\n", q.Addr)


	}

	return 0


}*/


func check(err error)(int){
	if err != nil{
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



	macho_file, err := macho.NewFile(file);
	if err != nil{
		return 1
	}
	requirements := macho_file.CodeSignature().Requirements;
	fmt.Printf("Requirements: %s", requirements);




	Imported_Names, _ := macho_file.ImportedSymbolNames()
	for _, y := range Imported_Names{
		fmt.Printf("%s\n", y);
	}





	var Objprotocols, erro = macho_file.GetObjCProtocols();
	check(erro);
	for _,y := range Objprotocols {
		fmt.Printf("Objective-C: %s\n", y.Name);
		fmt.Printf("Protocols-Objective-C: %s\n", y.String())
		sqlite_macho(file.Name(), y.String())
		if(y.Name == "NSXPCListenerDelegate"){
			color.Red("Found XPC Listener!")
		}
	}


	fmt.Printf("\nImported Libraries\n")
	for _, y := range macho_file.ImportedLibraries(){
		fmt.Printf("%s\n", y);
	}
	fmt.Println("\nSections")
	for _, y := range macho_file.Sections{
		fmt.Printf("%s, Address: 0x%d\n", y.Name, y.Addr)
	};



	return 0


}


func fat_parse(file_path string)(int){
	file, _ := os.Open(file_path)
	fat_file, err := macho.NewFatFile(file)
	if err != nil{
		return 1


	}

	if fat_file != nil{
		color.Green("File:%s\n", file.Name())

		for _, arch := range fat_file.Arches{
			//entitlements := arch.CodeSignature().Entitlements

			ObjProtocols, _ := arch.GetObjCProtocols()
			for _, Protocols := range ObjProtocols{
				color.Red("[+] Protcol: %s\n", Protocols.Name);
				color.Yellow("[-]Protocols_Dump: %s\n", Protocols.String());
				sqlite_macho(file.Name(), Protocols.String())


				//SQL(file.Name(), Protocols.String())


				OptMethods := Protocols.OptionalClassMethods
				color.HiBlueString("Optional Methods: %s\n", OptMethods);


				if(Protocols.Name == ""){
					color.HiGreen("[+]Found NSXPCListener! \n")
					color.Cyan("File Location: %s", file.Name())






				}
			}

			//	for _, Symbols := range FatSymbols{
			// match, _ := regexp.MatchString("[aA][uU][dD][iI][tT]..*", Symbols)
			//		   fmt.Printf("Symbol: %s\n", Symbols)
			//	   if match {
			//		   color.Red("- Found Audit!!\n")
			//	   }
			// }



		}
	}
	//}



	return 0




}

func walk_directory(path string)([]string, error){
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
		if parse_macho == 1{
			parse_fat := fat_parse(file)
			if parse_fat == 1{
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
	i := parser.String("i", "iokit scanner", &argparse.Options{Required: false, Help:"Find IOKit services\n"})
	o := parser.String("o", "open GUI", &argparse.Options{Required: false, Help:"Open GUI\n"});
	x := parser.String("x", "XPC", &argparse.Options{Required: false, Help: "Dump XPC Protocols\n"})
	err := parser.Parse(os.Args)
	if err != nil {
		// In case of error print error and print usage
		// This can also be done by passing -h or --help flags
		fmt.Print(parser.Usage(err))
	}

	if *x != ""{
		query_xpc()
	}
	if *o != ""{

	}
	if *i != ""{
		io_utils(*i)


	}
	if *f != "" {
		color.Red("Scanning File: %s\n", *f);
		parse_macho := parse_file_macho(*f)
		if parse_macho == 1 {
			parse_fat := fat_parse(*f)
			if parse_fat == 1 {
				return

			}
		}
	}
	if *d != "" {
		color.Green("Scanning Directory: %s\n", *d);
		walk_directory(*d)

	}
}