#include <stdio.h>
#include <stdlib.h>

/*In this task you will again work with the linked list
of digits we created during the lessons up to this point. 

You are provided with (but are not required to use) the
functions and prototypes we have written so far. You are
also provided with a main() function to test your code.
Please do not modify this main() function.

Your task is to write a new function countRedun() which 
takes as input a pointer that holds the address of the 
start of a linked list of digits. Your function should 
count how many redundancies can be observed in the number
stored in this list and return this count of redundancies. 
A redundancy is a digit which has previously already occurred
in the number. For example, in the number 39534, the second '3' 
is a redundancy.*/


struct digit {
    int num;
    struct digit *next;
};


// Add a prototype for countRedun() here
struct digit * createDigit(int);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *);
void freeNumber(struct digit *);
struct digit *readNumber(void); 
int divisibleByThree(struct digit * start);
int changeThrees(struct digit * start);
struct digit * insertAtFront(struct digit * start, struct digit * newptr);
struct digit * insertIntoSorted(struct digit *start, struct digit *newDig);
struct digit * sortedCopy(struct digit * start);
int countRedun (struct digit * start);


// Do not modify this main() function
int main(void) {
    struct digit *start;
    start = readNumber();

    printf("The number ");
    printNumber(start);
    printf("contains %d redundancies.\n", countRedun(start));

    freeNumber(start);

    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit *readNumber(void) {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n') {
        d = c-48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return(start);
}

int divisibleByThree(struct digit * start) {
    struct digit * ptr = start;
    int qsum = 0;
    while (ptr!=NULL) {
        qsum += ptr->num;
        ptr = ptr->next;
    }
    if (qsum%3==0) return 1;
    else return 0;
}

int changeThrees(struct digit * start) {
    struct digit * ptr = start;
    int sum = 0;
    while (ptr!=NULL) {
        if (ptr->num == 3) {
            ptr->num = 9;
            sum++;
        }
        ptr = ptr->next;
    }
    return(sum);
}



// Write your countRedun() function here

struct digit * sortedCopy(struct digit * start) {
    //! heap1=showMemory(start=348, cursors=[start, ptr, sortedStart, newDigit])
    //! heap2=showMemory(start=519, cursors=[start, newDigit, ptr, prev])
    struct digit *ptr = start;
    struct digit *sortedStart = NULL;
    struct digit *newDigit;
    
    if (start!=NULL) {
        sortedStart = createDigit(start->num);
        ptr = ptr->next;
    }
    while (ptr!=NULL) {
        newDigit = createDigit(ptr->num);
        sortedStart = insertIntoSorted(sortedStart, newDigit);
        ptr = ptr->next;
    }
    return(sortedStart);
}

struct digit * insertIntoSorted(struct digit *start, struct digit *newDig) {
    struct digit *ptr = start;
    struct digit *prev = NULL;
    while ((ptr!=NULL) && (ptr->num < newDig->num)) {
        prev = ptr;
        ptr = ptr->next;
    }
    if (prev == NULL) {
        start = insertAtFront(start, newDig);
    } else {
        prev->next = newDig;
        newDig->next = ptr;
    }
    return(start);
}

struct digit * insertAtFront(struct digit * start, struct digit * newptr) {
    newptr->next = start;
    return(newptr);
}

int countRedun (struct digit * start){
    int redun = 0;
    int prev = -1;
    struct digit * ptr = start;
    ptr = sortedCopy (ptr);
    while (ptr!=NULL){
    //cannot have a condition looking forward --> runs into NULL pointer exception
    // (if(ptr->num == ptr->next->num)), needs to look backwards to avoid exception
    //prev --> negative number, assuming all are positive so it won't be on the list
        if (ptr->num == prev){
            redun++;
        }
        prev = ptr->num;
        ptr = ptr->next;
    }
    freeNumber (ptr);
    return redun;
}

