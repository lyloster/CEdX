#include <stdio.h>

/*You are still conducting linguistic 
research! This time, you'd like to write 
a program to find out how many letters 
occur multiple times in a given word. Your
program should read a word from the input
and then sort the letters of the word 
alphabetically (by their ASCII codes). 
Next, your program should iterate through 
the letters of the word and compare each 
letter with the one following it. If these 
equal each other, you increase a counter 
by 1, making sure to then skip ahead far 
enough so that letters that occur more than 
twice are not counted again. You may assume
that the word you read from the input has 
no more than 50 letters, and that the word
is all lowercase.*/

int main (void){
    char word [51];
    scanf("%s", word);
    
    int i = 1;
    char temp = ' ';

    while (word[i] != '0'){
        if (word[i] < word[i-1]){
        temp = word[i];
        word[i] = word [i-1];
        word[i-1] = temp;
        }
    i++;
    }
    i = 1;
    int same = 0;
    while (word[i] != '0'){
     if (word[i] == word[i-1]){
         same++;
     }
    }
    // int beginning = 0;
    // int end = i;
    // int middle = (beginning + end)/2;
    // int current = 0;
 
    printf("%d", same);
    
    return 0;
}

 