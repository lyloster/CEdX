#include <stdio.h>
/*n this problem you will continue developing 
the data feature which you started implementing in 
the previous problem. You will implement a "tomorrow" 
feature in the C programming language via a function
called "advanceDay()". The function advanceDay() 
should take as input a date (stored in a struct date)
and return the date of the following day. You do not
have to take into account leap years (although you may
if you wish to). That is, it is okay for your function 
to always return March 1 as the day following February 28, 
no matter the year.

You are provided with a familiar date structure definition, 
a main function as well as the function prototypes for the
readDate(), printDate(), and advanceDate() functions. Do 
not modify any of the given code. Simply add your function 
definitions underneath the main() function. For the readDate() 
and printDate() functions you may simply copy and paste the
code you developed in the previous task*/
struct date {
        int year;
        int month;
        int day;
    };

void printDate(struct date);
void readDate(struct date *);

struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

// Write your readDate(), printDate(), and advanceDate() functions here
void readDate(struct date * today) {
    scanf ("%d %d %d", &(*today).year, &(*today).month, &(*today).day);
}

void printDate(struct date today){
    printf ("%.2d/%.2d/%d\n", today.month, today.day, today.year);
}

//FIX conditions for how long each month is
struct date advanceDay(struct date today){
    struct date tomorrow;
    if (today.day <=31){
        tomorrow.day = today.day+1;
    } else if (today.day >31){
        tomorrow.month = today.month + 1;
        tomorrow.day = 01;
    }
    if (today.month >=12){
        tomorrow.year = today.year + 1;
        tomorrow.month = 01;
        tomorrow.day = 01;
    }
    return tomorrow;
    
} 
