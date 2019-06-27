#include <stdio.h>

/*You are programming a toaster! The toaster 
does not have a lot of memory, so you need to 
be careful about the data types you use
(remember that different data types use 
different amounts of memory). To make this 
easier, you'd like an easy way to track how 
much memory your variables are going to use.

Your job is to write a program that shows, 
in human-readable form (see below for specifics),
how much memory a set of variables of a certain 
type will use. Your program should read a 
character that identifies the data type 
('i' for int, 's' for short, 'c' for char, 
'd' for double). Next it should read an 
integer that indicates how many variables 
of the given type you wish to store.

Your program should then calculate the amount 
of memory required to store the given variables.
Your program needs to be written in such a way 
that it would also perform correctly on other 
computers. In other words, rather than 
hard-coding specific sizes for the different
variable types, your program needs to use the 
"sizeof()" function to determine how much memory 
an individual variable of a given type needs.

Finally, you need to output the amount of 
space required by your variables to the screen. 
You need to make sure you provide this output in
a form that is easy to read for humans. The 
following examples illustrate what this means:

Examples
If the user input were:
i 36794
then the amount of space needed 
(if we assume that an integer uses 
4 bytes in memory) would be 4*36794 = 147176 bytes.
This corresponds to 147 kilobytes and 176 bytes,
so the output should be:
147 KB and 176 B*/

int sizeBytes( char type, int variables);

int main (void){
    char type;
    int numVariables;
    scanf ("%c %d", &type, &numVariables);
    int bytes = 0;
    bytes = sizeBytes(type, numVariables);
    int kb = 0;
    int mb = 0;
    if (bytes > 1000 && bytes < 1000000){
        kb = bytes/1000;
        bytes = bytes%1000;
        printf ("%d KB and %d B", kb, bytes);
    }else if( bytes>= 1000000){
        mb = bytes/1000000;
        kb = bytes/1000 - mb*1000;
        bytes = bytes%1000;
        printf ("%d MB and %d KB and %d B", mb, kb, bytes);
    }else{
        printf( "%d B", bytes);
    }
    return 0;
}

int sizeBytes (char type, int variables){
    int sizeBytes = 0;
    if (type == 'c'){
        sizeBytes = sizeof(char) *variables;
    }else if(type == 'i'){
        sizeBytes = sizeof(int) *variables;
    }else if (type == 'd'){
        sizeBytes = sizeof(double) *variables;
    }else if (type == 's'){
        sizeBytes = sizeof(short) *variables;
    }
    return sizeBytes;
}