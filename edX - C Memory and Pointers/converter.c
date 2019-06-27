#include <stdio.h>

/*Write a C-program that converts metric
measurements to imperial system values.
Measurements are provided to your program 
in meters, grams or degrees Celsius and 
must be converted to feet, pounds and 
degrees Fahrenheit, respectively.

Here are the conversion rules to use:
1 meter = 3.2808 feet;
1 gram = 0.002205 pounds;
temperature in degrees Fahrenheit = 32 + 1.8 × temperature in degrees Celsius.

On the first input line you are given
the number of conversions to be made. 
Each of the following lines contains a 
value to be converted as well as its 
unit: m, g or c (for meters, grams or 
degrees Celsius). There will be a space
between the number and the unit. You 
should print your output value for each 
input line immediately after calculating 
it (ie, you do not have to wait until you 
have read all inputs).

Display the converted values with 6 
decimal places, followed by a space 
and their unit: ft, lbs or f (for feet, 
pounds or degrees Fahrenheit). Each conversion 
result should be printed on its own line, and 
you should store and display all decimal values 
as doubles.*/

void convertWeight(double grams);
void convertLength (double meters);
void convertTemp (double celsius);

int main (void){
    int conversions;
    int i = 0;
    double value;
    char measurement;
    
    scanf("%d", &conversions);
    
    for (i = 0; i<conversions; i++){
    scanf("%lf %c", &value, &measurement);
    if (measurement == 'm'){
        convertLength(value);
    }else if( measurement == 'g'){
        convertWeight(value);
    }else if(measurement == 'c'){
        convertTemp(value);
    }
    }
    return 0;
}

void convertLength (double meters){
    double feet = meters * 3.2808;
    printf ("%.6lf ft\n", feet);
}

void convertWeight (double grams){
    double lbs = grams * 0.002205;
    printf ("%.6lf lbs\n", lbs);
}

void convertTemp (double celsius){
    double farh = 32 + 1.8 * celsius;
    printf ("%.6lf f\n", farh);
}