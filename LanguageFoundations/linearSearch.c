#include <stdio.h>

/*You are conducting a linguistic study 
and are interested in finding words that
contain the letter 't' or 'T' in the 
first half of the word (including the 
middle letter if there is one). Specifically,
if the first half of the word does contain 
a 't' or a 'T', your program should output 
a 1. If the first half does not contain the 
letter 't' or 'T', but the second half does, 
then your program should output a 2. Otherwise, 
if there is no 't' or 'T' in the word at 
ll, your program's output should be -1.
You may assume that the word entered does
not have more than 50 letters.*/

int main (void){
    char word [51];
    scanf("%s", word);
    int found = 0;
    int half = 0;
    int i = 0;
    int length = 0;
    while (word[length] !='\0'){
        length++;
    }
    while (!found && word[i] !='\0'){
        if (word[i] == 't' || word [i]== 'T'){
        found = 1;
        }
        i++;
    }
    //first checks if t/T is not found
    if (!found){
        half = -1;

    }else if (word[i] < (length/2)){ // aren't conditions flipped?
        half = 2;
    }else if  (word[i] >= (length/2)){
        half = 1;
        }
    printf ("%d", half);
    return 0;
}