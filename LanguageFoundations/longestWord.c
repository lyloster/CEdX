#include <stdio.h>

/*Your job is to find the length of the
longest word in a text with no punctuation
or special characters of any kind - only 
contains words. To do so, please write a 
C-program that takes as a input first the 
number of words in a text, followed by all 
of the words in the text. The output of your 
program should be the length of the longest 
word in the text.

To simplify your program, you can assume 
that the longest word will not exceed 100 characters.*/

int main (void){
    int numberOfWords;
    scanf("%d", &numberOfWords);
    char words [101];
    int i = 0;
    int longest = 0;
    int j = 0;
    for (i = 0; i<numberOfWords; i++){
        scanf ("%s", words);
        while (words[j]!='\0'){
             j++;
        }
        if (longest<j){
             longest = j;
        }
        
    }
    printf("%d", longest);
    return 0;
}
