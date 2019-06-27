#include <stdio.h>

/*The goal of this problem is to find 
the smallest integer in a list of numbers.

To help you with this task, please write 
a function called min() that finds and
returns the smallest amongst two integers
(be sure to also write a prototype for 
this function). The function thus takes 
two integers as input and returns the 
smallest of the two. This function will 
use an if statement with a condition that
contains either "less than" or "greater than".

Next, please use min() in your main function
to work your way through an entire list of 
numbers in order to find its minimum. The 
first number you read gives the number of 
elements in the list of integers under 
consideration. You will then read the integer 
values, using min() to keep only the smallest 
integer read at each step. In the end, please
print out the smallest integer in the list.*/

int min (int a, int b);

int main (void){
    int length;
    scanf("%d", &length);
    int minimum;
    scanf("%d", &minimum);
    int next;
    for (int i = 1; i<length; i++){
        scanf("%d", &next);
        minimum = min(minimum, next);
    }
    printf("%d", minimum);
    return 0;
}

int min (int a, int b){
    if (a<=b) return a;
    else return b;
}