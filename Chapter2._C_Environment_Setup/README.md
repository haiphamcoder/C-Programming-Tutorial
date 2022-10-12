# Chapter 2. C Environment Setup

```text
This section describes how to set up your system environment before you start doing your programming using C language.
```

Before you start doing programming using C programming language, you need the following two softwares available on your computer, (a) Text Editor and (b) The C Compiler.

## Text Editor

This will be used to type your program. Examples of few editors include Windows Notepad, OS Edit command, Brief, Epsilon, EMACS, and vim or vi.

Name and version of text editor can vary on different operating systems. For example, Notepad will be used on Windows, and vim or vi can be used on windows as well as Linux or
UNIX.

The files you create with your editor are called source files and contain program source code. The source files for C programs are typically named with the extension “.c”.

Before starting your programming, make sure you have one text editor in place and you have enough experience to write a computer program, save it in a file, compile it and finally
execute it.

## The C Compiler

The source code written in source file is the human readable source for your program. It needs to be "compiled", to turn into machine language so that your CPU can actually execute the program as per instructions given.

This C programming language compiler will be used to compile your source code into final executable program. I assume you have basic knowledge about a programming language
compiler.

Most frequently used and free available compiler is GNU C/C++ compiler, otherwise you can have compilers either from HP or Solaris if you have respective Operating Systems.

Following section guides you on how to install GNU C/C++ compiler on various OS. I'm mentioning C/C++ together because GNU gcc compiler works for both C and C++ programming languages.

## Installation on UNIX/Linux

If you are using Linux or UNIX, then check whether GCC is installed on your system by entering the following command from the command line:

```bash
gcc -v
```

If you have GNU compiler installed on your machine, then it should print a message something as follows:

```bash
Using built-in specs.
COLLECT_GCC=gcc
COLLECT_LTO_WRAPPER=/usr/lib/gcc/x86_64-linux-gnu/9/lto-wrapper
OFFLOAD_TARGET_NAMES=nvptx-none:hsa
OFFLOAD_TARGET_DEFAULT=1
Target: x86_64-linux-gnu
Configured with: ../configure --prefix=/usr .......
Thread model: posix
gcc version 9.4.0 (Ubuntu 9.4.0-1ubuntu1~20.04.1)
```

If GCC is not installed, then you will have to install it yourself using the detailed instructions available at <http://gcc.gnu.org/install/>

This tutorial has been written based on Linux and all the given examples have been compiled on Cent OS flavor of Linux system.

## Installation on MacOS

If you use Mac OS X, the easiest way to obtain GCC is to download the Xcode development environment from Apple's web site and follow the simple installation instructions. Once you have Xcode setup, you will be able to use GNU compiler for C/C++.

## Installation on Windows

To install GCC at Windows you need to install MinGW. To install MinGW, go to the MinGW homepage, <https://www.mingw-w64.org/>, and follow the link to the MinGW download page. Download the latest version of the MinGW installation program, which should be named MinGW-\<version>.exe.

While installing MinWG, at a minimum, you must install gcc-core, gcc-g++, binutils, and the MinGW runtime, but you may wish to install more.

Add the bin subdirectory of your MinGW installation to your PATH environment variable, so that you can specify these tools on the command line by their simple names.

When the installation is complete, you will be able to run gcc, g++, ar, ranlib, dlltool, and several other GNU tools from the Windows command line.

[Previous](/Chapter1._C_Language_Overview/README.md "Chapter 1. C Language Overview") | [Next](/Chapter3._C_Program_Structure/README.md "Chapter 3. C Program Structure")

[Back to Table of Contents](../README.md "Table of Contents")
