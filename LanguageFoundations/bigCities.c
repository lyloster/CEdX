#include <stdio.h>

/*You want to determine the number of 
cities in a given region that have a 
population strictly greater than 10,000.
To do this, you write a program that 
first reads the number of cities in a
region as an integer, and then the 
populations for each city one by one 
(also integers).*/

int main (void){
    int cities;
    scanf("%d", &cities);
    int population[100];
    int i;
    int bigCities = 0;
    for (i = 0; i<cities; i++){
        scanf("%d", &population[i]);
        if(population[i]>10000){
            bigCities++;
        }
    }
    printf("%d", bigCities);
    return 0;
}