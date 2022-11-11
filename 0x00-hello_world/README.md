<img src="https://upload.wikimedia.org/wikipedia/commons/1/18/C_Programming_Language.svg" width=150 height=150/> 

# Project 212 0x00. C - Hello, World

## Description

- This is a repository for projects built for us to learn low-level programming in C language.

## Rules and Requirements

- **_C_**
	- Allowed editors: ```vi```, ```vim```, ```emacs```
	- All our files will be compiled on Ubuntu 20.04 LTS using ```gcc```, using the options ```-Wall -		Werror -Wextra -pedantic -std=gnu89```
	- All our files should end with a new line
	- A ```README.md``` file at the root of the repo, containing a description of the repository
	- A ```README.md``` file, at the root of the folder of this project, containing a description of the project
	- There should be no errors and no warnings during compilation
	- We are not allowed to use ```system```
	- Our code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

- **_Shell Scripts_**
	- Allowed editors: ```[vi](https://en.wikipedia.org/wiki/Vi)```, ```[vim](https://en.wikipedia.org/wiki/Vim_(text_editor))```, ```[emacs](https://en.wikipedia.org/wiki/Emacs)```
	- All our scripts will be tested on Ubuntu 20.04 LTS
	- All our scripts should be exactly two lines long (```$ wc -l file``` should print 2)
	- All our files should end with a new line
	- The first line of all our files should be exactly ```#!/bin/bash```
	
## 💡 Learning Objectives

- Why C programming is awesome
- Who invented C
- Who are [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie), [Brian Kernighan](https://en.wikipedia.org/wiki/Brian_Kernighan) and [Linus Torvalds](https://en.wikipedia.org/wiki/Linus_Torvalds)
- What happens when you type ```gcc main.c```
- What is an entry point
- What is ```main```
- How to print text using ```printf```, ```puts``` and ```putchar```
- How to get the size of a specific type using the unary operator ```sizeof```
- How to compile using ```gcc```
- What is the default program name when compiling with ```gcc```
- What is the official C coding style and how to check your code with ```betty-style```
- How to find the right header to include in your source code when using a standard library function
- How does the ```main``` function influence the return value of the program

## Project Tasks

- ### 0. Preprocessor
	- We were tasked to write a script that runs a C file through the preprocessor and save the result into another file.
		- The C file name will be saved in the variable ```$CFILE```
		- The output should be saved in the file ```c```
___		
- ### 1. Compiler
	- We were tasked to write a script that compiles a C file but does not link.
		-The C file name will be saved in the variable ```$CFILE```
		- The output file should be named the same as the C file, but with the extension ```.o``` instead of ```.c.```
			- Example: if the C file is ```main.c```, the output file should be ```main.o```
___
- ### 2. Assembler
	- We were tasked to write a script that generates the assembly code of a C code and save it in an output file.
		- The C file name will be saved in the variable ```$CFILE```
		- The output file should be named the same as the C file, but with the extension ```.s``` instead of ```.c.```
			- Example: if the C file is ```main.c```, the output file should be ```main.s```
___
- ### 3. Name
	- We were tasked to write a script that compiles a C file and creates an executable named ```cisfun```.
		- The C file name will be saved in the variable ```$CFILE```
___
- ### 4. Hello, puts
	- We were tasked to write a C program that prints exactly ```"Programming is like building a multilingual puzzle```, followed by a new line.

		- Use the function ```puts```
		- We are not allowed to use ```printf```
		- Our program should end with the value ```0```
___		
- ### 5. Hello, printf
	- We were tasked to write a C program that prints exactly ```with proper grammar, but the outcome is a piece of art,```, followed by a new line.

		- Use the function printf
		- We are not allowed to use the function ```puts```
		- Our program should return ```0```
		- Our program should compile without warning when using the ```-Wall``` ```gcc``` option
___
- ### 6. Size is not grandeur, and territory does not make a nation
	- We were tasked to write a C program that prints the size of various types on the computer it is compiled and run on.

		- We should produce the exact same output as in the example
		- Warnings are allowed
		- Our program should return ```0```
		- We had to install the package ```libc6-dev-i386``` on our Linux to test the ```-m32``` ```gcc``` option
___		
- ### 7. Intel
	- We were tasked to write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

		- The C file name will be saved in the variable ```$CFILE```.
		- The output file should be named the same as the C file, but with the extension ```.s``` instead of ```.c```.
			- Example: if the C file is ```main.c```, the output file should be ```main.s```
___			
- ### 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity (_ADVANCED TASK_)

	- We were tasked to write a C program that prints exactly ```and that piece of art is useful" - Dora Korpar, 2015-10-19```, followed by a new line, to the standard error.

		- We are not allowed to use any functions listed in the NAME section of the man (3) ```printf``` or man (3) ```puts```
		- Our program should return 1
		- Our program should compile without any warnings when using the ```-Wall``` ```gcc``` option
