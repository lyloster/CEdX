#include <stdio.h>

/*Create a program that displays on 
the screen a square of n x n stars,
with the integer n given as an input.*/

int main (void){
    int n;
    scanf("%d", &n);
    int i;
    int j;
    for (i = 0; i<n; i++){
        for(j = 1; j<n; j++){
            printf("*");
        }
        printf("*\n");
    }
    return 0;
}