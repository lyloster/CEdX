#include <stdio.h>

/*You plan to make a delicious meal 
and want to take the money you need 
to buy the ingredients. Fortunately 
you know in advance the price per pound 
of each ingredient as well as the exact
amount you need. The program should 
read in the number of ingredients 
(up to a maximum of 10 ingredients), 
then for each ingredient the price per 
pound. Finally your program should read
the weight necessary for the recipe 
(for each ingredient in the same order).
Your program should calculate the total 
cost of these purchases, then display it 
with 6 decimal places.*/

int main (void){
int ingredients;
scanf("%d", &ingredients);
double price[10];
int i = 0;
for (i = 0; i<ingredients; i++){
    scanf("%lf", &price[i]);
}
double weight[10];
for (i = 0; i<ingredients; i++){
    scanf("%lf", &weight[i]);
}
double totalPrice = 0;
for (i = 0; i<ingredients; i++){
    totalPrice += (price[i]*weight[i]);
}
printf("%.6lf", totalPrice);
    return 0;
}