# Chapter 3. C Program Structure

```text
Let’s look into Hello World example using C Programming Language.
```

Before we study basic building blocks of the C programming language, let us look a bare minimum C program structure so that we can take it as a reference in upcoming
chapters.

## C Hello World Example

A C program basically consists of the following parts:

- Preprocessor Commands
- Functions
- Variables
- Statements & Expresstions
- Comments

Let us look at a simple code that would print the words "Hello World":

```c
#include <stdio.h>

int main(){
    // My first program in C
    printf("Hello World!\n");
    return 0;
}
```

Let us look various parts of the above program:

1. The first line of the program #include <stdio.h> is a preprocessor command, which tells a C compiler to include stdio.h file before going to actual compilation.

2. The next line int main() is the main function where program execution begins.

3. The next line //.... will be ignored by the compiler and it has been put to add additional comments in the program. So such lines are called comments in the program.

4. The next line printf(...) is another function available in C which causes the message "Hello World!" to be displayed on the screen.

5. The next line return 0; terminates main()function and returns the value 0.

## Compile & Execute C Program

Let’s look at how to save the source code in a file, and how to compile and run it. Following are the simple steps:

1. Open a text editor and add the above-mentioned code.

2. Save the file as hello.c

3. Open a command prompt and go to the directory where you saved the file.

4. Type **gcc hello.c** and press enter to compile your code.

5. If there are no errors in your code, the command prompt will take you to the next line and would generate **a.out** executable file.

6. Now, type **a.out** to execute your program.

7. You will be able to see "Hello World!" printed on the screen

```bash
$ gcc hello.c
$ ./a.out
Hello World!
```

Make sure that **gcc** compiler is in your path and that you are running it in the directory containing source file **hello.c**.

[Previous](/Chapter2._C_Environment_Setup/README.md "Chapter 2. C Environment Setup") | [Next](/Chapter4._C_Basic_Syntax/README.md "Chapter 4. C Basic Syntax")

[Back to Table of Contents](../README.md "Table of Contents")
