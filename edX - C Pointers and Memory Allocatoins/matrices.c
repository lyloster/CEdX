#include <stdio.h>
void printMatrix1 (int matrix[2][3]);
void printMatrix2 (int* matrix, int rows, int cols);
void printSeparator();

int main(void) {
    printSeparator();
    // Method1: Static dimensions
    // Pros: Simple way to create 2d array
    // Cons: Static dimensions, not general
    int matrix1 [2][3] =
    {
        {2, 5, 6},
        {8, -3, 0}
    };
    printMatrix1(matrix1);
    printSeparator();

    int matrix2[6] = {2, 5, 6, 8, -3, 0};
    int rows2 = 2, cols2 = 3;
    printMatrix2(matrix2, rows2, cols2);
    printSeparator();

    return 0;
}

void printSeparator() {
    printf("------------------------------------------------------------\n");
}

void printMatrix1 (int matrix[2][3]) {
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
     }
}

void printMatrix2 (int* matrix, int rows, int cols) {
            // i - current row, j - current col
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                        int index = j + cols * i;
                        printf("%d\t", matrix[index]);
                }
                printf("\n");
            }
}