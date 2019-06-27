#include <stdio.h>

/*You are teaching a class on C-programming! You would like to 
find out whether your teaching has been effective, and so you 
need to compute the average grade your students have received 
on the most recent assignment. These grades (integers) are stored
in the file studentGrades.txt.

The first entry in the file (an integer) is the number of student 
grades that are stored in the file. For example, if the file was as follows:

9
56 3 8 11 0 45 55 2 78
this would mean that there are 9 grades stored in the
file (starting with 56 and ending with 78).

Your job is to calculate and print out the average 
of the grades stored in the file. Please print the 
average grade with two decimal places.*/
void openfile (void);
void averageGrade (int n, int ** grades);
int main (void){
    openfile();
    return 0;
}

void openfile (void){
    int n, i, *grades;
    FILE *ifile;
    ifile = fopen("studentGrades.txt", "r");
    n = fscanf(ifile, "%d", &n);
    for (i=0; i<n; n++){
        grades[i] = fscanf(ifile, "%d", &grades[i]);
    }
    averageGrade(n, *grades);
    fclose(ifile);
}

void averageGrade (int n, int **grades){
    int total, i, j;
    for (i=0; i<n; i++){
        //for (j=0; j<n; j++){
        //total += grades[j][i];
        //}
        total += *grades[i];
    }
    double average = total/n;
    printf ("%.2lf", average);
}