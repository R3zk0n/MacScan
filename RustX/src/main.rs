extern crate darwin;
extern crate libc;
extern crate mach;
extern crate sysinfo;
use colored::Colorize;
use libc::{c_char, c_int, int32_t, mach_port_t, pid_t};
use mach::message::mach_msg_type_number_t;
use mach::structs::x86_thread_state64_t;
use mach::task::{task_resume, task_suspend, task_threads};
use mach::thread_act::thread_get_state;
use mach::thread_status::x86_THREAD_STATE64;
use mach::traps::{mach_task_self, task_for_pid};
use std::borrow::Borrow;
use std::ffi::CString;
use std::io::{stdin, Read};
use std::mem;
use std::process;
use std::ptr;
use std::{env, io};
use sysinfo::{Pid, ProcessExt, System, SystemExt};

use clap::Parser;
use mach::bootstrap;
use mach::bootstrap::{bootstrap_look_up, bootstrap_port};
use mach::kern_return;
use mach::port::{mach_port_name_t, MACH_PORT_NULL};

#[derive(Parser, Debug)]
#[clap(author = "Rezkon")]
#[clap(version = "zeta 0.0.1")]
#[clap(about = "Learning Rust VIA useful OSX Utils")]
#[clap(long_about = None)]
struct pids_args {
    #[clap(long)]
    Mach_Service: Option<String>,

    #[clap(long, parse(try_from_str))]
    check_pids: Option<bool>,
}

fn enumerate_pid_task_pid() {
    let s = System::new_all();

    for (pid, process) in s.processes() {
        // println!("{} {}", pid, process.name());
        let task: mach_port_name_t = 0;
        unsafe {
            let kret = task_for_pid(
                mach_task_self() as mach_port_name_t,
                *pid,
                mem::transmute(&task),
            );
        };

        let own_pid = process::id() as i32;

        //println!("task: = 0x{:x}", &task);
        if pid == &own_pid {
            println!("This is our own PID: {}", own_pid)
        }
        if task == 0x0 {
            //   println!("Process: {} not vulnerable", process.name().red());
        }
        if task != 0x0 {
            println!(
                "{}",
                format!(
                    "[+] PID: {} Process Name: {} is VULNERABLE[+]",
                    pid,
                    process.name().yellow()
                )
                .green()
            );
        }
    }
}

unsafe fn bootstrap_checks(name: String) {
    let mut port = 0;
    let service_name = CString::new(name).unwrap();
    let result = bootstrap_look_up(bootstrap_port, service_name.as_ptr(), &mut port);
    println!("Result: {}", result);
    if result != 0x0 {
        println!(
            "{}",
            format!(
                "Service Name:{} is not accessible",
                service_name.into_string().unwrap()
            )
            .red()
        );
    } else {
        println!(
            "{}",
            format!(
                "Service Name: {} is accessible",
                service_name.into_string().unwrap()
            )
            .green()
        );
    }
}

fn check_xpc(name: String) {
    println!("Enter a XPC to check");
    let mut input = String::new();
    stdin().read_line(&mut input).expect("Failed to read input");
    let name = input.lines().next().expect("Could not read lines");
    println!("Name: {}", name);
    unsafe {
        bootstrap_checks(name.to_string());
    }
}

fn main() {
    let cli = pids_args::parse();

    // let args = pids_args::parse();
    if cli.check_pids == Some(true) {
        enumerate_pid_task_pid();
        return;
    }

    if let Some(check_pids) = cli.check_pids {
        enumerate_pid_task_pid();
    }

    if let Some(Mach_Service) = cli.Mach_Service.as_deref() {
        unsafe { bootstrap_checks(Mach_Service.to_string()) }
    }

    //unsafe { bootstrap_checks(args.Mach_Service); }
}
