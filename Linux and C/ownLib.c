/*You are teaching students how to compile C programs, and you
wish to share your knowledge on library creation and usage. You 
have created a library with multiple functions to apply special
effects to image files. The source code for these functions is in 
a file called libimage.c. You would like to create a binary library from
this file so that it can be used in multiple projects.

You then would like to use this library in your project named 
"superimage" in order to show some examples. The source code of 
this project is stored in superimage.c, the project uses the 
libimage.so library, and you would like to produce a program 
called superimage. You may assume that the libimage.so file has 
been moved to the /usr/lib folder, and that you may thus use the -lXXX 
flag at compile time instead of including the entire path.

To discuss how to create and use this library in class, you would 
like to create a program that simply prints the two compilation lines 
for these two steps. So here is your task:

Write a simple C-program with two printf commands that does the following:

print the necessary compilation command (with a simple printf)
to create a libimage.so binary library from libimage.c.
print the necessary compilation command (with a simple printf) 
to build your "superimage" project.*/

#include <stdio.h>


int main (void){
    printf ("gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c libimage.c -o libimage.so\n");
    printf ("gcc -std=c11 -Wall -fmax-errors=10 -Wextra -limage superimage.c -o superimage\n");
}



/*For your superimage project, you have the following files in one folder:

libimage.c to create a library libimage.so
libimage.h to include the declarations of the library functions
superimage.c with the main program containing a main function that uses libimage. This file is used to create the final executable binary superimage.
Now you would like to create a Makefile to compile and link your program. Please submit a makefile which contains the following:

A line containing the superimage target and its dependencies
A line containing how to produce the superimage target (correctly indented by 4 spaces)
A line containing the target libimage.so and its dependencies 
A line containing how to produce the target libimage.so (correctly indented by 4 spaces)*/


superimage: superimage.c libimage.so
    gcc -std=c11 -Wextra -fmax-errors=10 -Wall superimage.c libimage.so -o superimage
    
libimage.so: libimage.c libimage.h
    gcc -std=c11 -Wextra -fmax-errors=10 -Wall -c libimage.c -o libimage.so
