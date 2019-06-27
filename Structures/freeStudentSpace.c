#include <stdio.h>
#include <stdlib.h>

/*Your current task is to write a function freeStudents()
which takes as input a pointer that holds the address of 
the start of a linked list of students. Your function should 
then free the space allocated for each student in this list of
students. Your function should not return anything.*/

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
struct student *append(struct student * end, struct student * newStudptr);
void copyStr (char inputName [], char newStudentName[]); 
void printStudents(struct student *start);
void freeStudents(struct student *start);


int main(void) {
    struct student *start, *newStudptr, *end;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);

    start = createStudent("Petra", ageP);
    end = start;
    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printStudents(start);
    freeStudents(start);

    return 0;
}

/* Place your function definitions here. Be sure to include the definitions for 
   createStudent(), append(), printStudents() as well as any other functions you 
   created for the previous tasks. */
 struct student *createStudent(char studentName[], int studentAge){
    struct student * newStudent;
    //the size of the STRUCT STUDENT not the size of the STRUCT STUDENT * !!!
    newStudent = (struct student *) malloc(sizeof(struct student));
    copyStr (studentName, newStudent->name);
    newStudent->age = studentAge;
    newStudent->next = NULL;
    return newStudent;
}

void copyStr (char inputName [], char newStudentName[]){
    int i = 0;
    while (inputName[i]!='\0'){
        newStudentName[i] = inputName[i];
        i++;
    }
    newStudentName[i] = '\0';
} 

struct student * append (struct student * end, struct student * newStudptr){
    end->next = newStudptr;
    end = newStudptr;
    return (end);
}

void printStudents(struct student *start){
    struct student * ptr = start;
    while (ptr != NULL){
        printf("%s is %d years old.\n", ptr->name, ptr->age);
        //changed from last exercise, ptr was not updating
        ptr = ptr->next;
    }
    // Also works - no need to copy student*, it's already copied when its passed in to the function.
    // while (start != NULL){
    //     printf("%s is %d years old.\n", start->name, start->age);
    //     //changed from last exercise, start was not updating
    //     start = start->next;
    // }
   }
   
void freeStudents(struct student *start){
    struct student * ptr = start;
    struct student * temp;
    while (ptr!=NULL){
        //careful with temp order
        //temp = ptr->next not temp->next = ptr, temp is NULL, temp->next is NULL NULL 
        temp= ptr->next;
        free(ptr);
        ptr = temp;
    }
}