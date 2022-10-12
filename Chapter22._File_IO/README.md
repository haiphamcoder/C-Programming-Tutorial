# Chapter 22. File I/O

Last chapter explained about standard input and output devices handled by C programming language. This chapter we will see how C programmers can create, open, close text or binary files for their data storage.

A file represents a sequence of bytes, does not matter if it is a text file or binary file. C programming language provides access on high level functions as well as low level (OS level) calls to handle file on your storage devices. This chapter will take you through important calls for the file management.

## Opening Files

You can use the fopen( ) function to create a new file or to open an existing file, this call will initialize an object of the type FILE, which contains all the information necessary to control the stream. Following is the prototype of this function call:

```c
FILE *fopen( const char * filename, const char * mode );
```

Here, filename is string literal, which you will use to name your file and access mode can have one of the following values:

| Mode | Description |
|:----:|:------------|
| r | Opens an existing text file for reading purpose. |
| w | Opens a text file for writing, if it does not exist then a new file is created. Here your program will start writing content from the beginning of the file. |
| a | Opens a text file for writing in appending mode, if it does not exist then a new file is created. Here your program will start appending content in the existing file content. |
| r+ | Opens a text file for reading and writing both. |
| w+ | Opens a text file for reading and writing both. It first truncate the file to zero length if it exists otherwise create the file if it does not exist. |
| a+ | Opens a text file for reading and writing both. It creates the file if it does not exist. The reading will start from the beginning but writing can only be appended. |

If you are going to handle binary files then you will use below mentioned access modes instead of the above mentioned:

```c
"rb", "wb", "ab", "ab+", "a+b", "wb+", "w+b", "ab+", "a+b"
```

## Closing a File

To close a file, use the fclose( ) function. The prototype of this function is:

```c
int fclose( FILE *fp );
```

The fclose( ) function returns zero on success, or EOF if there is an error in closing the file. This function actually, flushes any data still pending in the buffer to the file, closes the file, and releases any memory used for the file. The EOF is a constant defined in the header file stdio.h.

There are various functions provide by C standard library to read and write a file character by character or in the form of a fixed length string. Let us see few of the in the next section.

## Writing a File

Following is the simplest function to write individual characters to a stream:

```c
int fputc( int c, FILE *fp );
```

The function fputc() writes the character value of the argument c to the output stream referenced by fp. It returns the written character written on success otherwise EOF if there is an error. You can use the following functions to write a null-terminated string to a stream:

```c
int fputs( const char *s, FILE *fp );
```

The function fputs() writes the string s to the output stream referenced by fp. It returns a non-negative value on success, otherwise EOF is returned in case of any error. You can use int fprintf(FILE \*fp,const char *format, ...) function as well to write a string into a file. Try the following example:

```c
#include <stdio.h>

main() {
    FILE *fp;

    fp = fopen("/tmp/test.txt", "w+");
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);
    fclose(fp);
}
```

When the above code is compiled and executed, it creates a new file test.txt in /tmp directory and writes two lines using two different functions. Let us read this file in next section.

## Reading a File

Following is the simplest function to read a single character from a file:

```c
int fgetc( FILE * fp );
```

The fgetc() function reads a character from the input file referenced by fp. The return value is the character read, or in case of any error it returns EOF. The following functions allow you to read a string from a stream:

```c
char *fgets( char *buf, int n, FILE *fp );
```

The functions fgets() reads up to n - 1 characters from the input stream referenced by fp. It copies the read string into the buffer buf, appending a null character to terminate the string.

If this function encounters a newline character '\n' or the end of the file EOF before they have read the maximum number of characters, then it returns only the characters read up to that point including new line character. You can also use int fscanf(FILE \*fp, const char *format, ...) function to read strings from a file but it stops reading after the first space character encounters.

```c
#include <stdio.h>

main() {
    FILE *fp;
    char buff[ 100 ];

    fp = fopen("/tmp/test.txt", "r");
    fscanf(fp, "%s", buff);
    printf("1 : %s\n", buff );

    fgets(buff, 255 , (FILE*)fp);
    printf("2: %s\n", buff );

    fgets(buff, 255 , (FILE*)fp);
    printf("3: %s\n", buff );
    fclose(fp);
}
```

When the above code is compiled and executed, it reads the file created in previous section and produces the following result:

```console
1 : This
2: is testing for fprintf...
3: This is testing for fputs...
```

Let's see a little more detail about what happened here. First fscanf() method read just This because after that it encountered a space, second call is for fgets() which read the remaining line till it encountered end of line. Finally last call fgets() read second line completely.

## Binary I/O Functions

There are following two functions, which can be used for binary input and output:

```c
size_t fread(void *ptr, size_t size_of_elements, size_t number_of_elements, FILE *a_file);

size_t fwrite(const void *ptr, size_t size_of_elements, size_t number_of_elements, FILE *a_file);
```

Both of these functions should be used to read or write blocks of memories - usually arrays or structures.

[Previous](/Chapter21._Input_and_Output/README.md "Chapter 21. Input & Output") | [Next](/Chapter23._Preprocessors/README.md "Chapter 23. Preprocessors").

[Back to Table of Contents](../README.md "Table of Contents")
