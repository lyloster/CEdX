#include <stdio.h>
#include <stdlib.h>

/*You are selling plants and are working on creating 
invoices for customer orders. You are testing a program 
that should receive, as arguments passed in from the command
line, a number of plants to be purchased (an integer) and the
price per plant (a decimal number). Your job is to create
an invoice for the customer (see examples) that prints out
the total price of the order (which can be found by multiplying 
the price per plant by the number of plants purchased). 

If your program is called with an incorrect number of
arguments the user should receive the message "Invalid 
input" (see Example 3).*/

void invoice (int plants, double price);

//reads input from user --> first argument is the number of elements in array +1 for the program itself
// each value in the array is a value for the variables in the program

//why is it char **?
int main (int args, char ** argsvalues){
    int plants;
    double price;
    if (args != 3){
        printf ("Invalid input.");
    }else{
        //ascii to int and to float in stdlib
        plants = atoi(argsvalues[1]);
        price = atof(argsvalues[2]);
        invoice (plants, price);
    }
    return 0;
}

void invoice (int plants, double price){
   double invoice = plants * price;
   printf ("%d plants for %.2lf dollars each cost %.2lf dollars.\n", plants, price, invoice);
}