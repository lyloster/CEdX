#include <stdio.h>

/*Write a C-program that prints 
out a word as many times as specified.
The number of repetitions and
the word should be given as input
to the program. You may assume 
that the word has no more than 
100 characters (be sure to also 
reserve space for the null 
terminator, \0, though!).*/

int main (void){
    int repetition;
    scanf("%d", &repetition);
    char word [101];
    scanf("%s", word);
    int i = 0;
    for (i=0; i<repetition; i++){
        printf("%s\n", word);
    }
    return 0;
}