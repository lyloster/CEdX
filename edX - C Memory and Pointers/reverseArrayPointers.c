#include <stdio.h>

/*Within this program, we will pass an 
array with 6 integers to a function, have
the function swap the first and last integer,
the second and the second to last integer,
the third and the third to last integer.

The function is called reverseArray and 
doesn't return anything (void). It should 
take one parameter, representing the array
of integers. 

The main function first reads 6 integers 
from the input, and assigns them to the array. 
The main function then calls reverseArray, 
passing the array as an argument.

The main function then prints the reversed array.*/

// void reverseArray(int * ptr);
void reverseArray(int* ptr, int size);
// void reverseArray(int ptr[6]);
void swap(int* a, int* b);

int main (void){
    int arr[6];
    int i = 0;
    for (i = 0; i<6; i++){
    scanf("%d", &arr[i]);
    }
    reverseArray (arr, 6);
    for (i = 0; i<6; i++){
    printf ("%d ", arr[i]);
    }
    return 0;
}

// void reverseArray(int * ptr){
//     int temp = *ptr;
//     *ptr = *(ptr+5);
//     *(ptr+5) = temp;
//     temp = * (ptr +1);
//     *(ptr + 1) = *(ptr+4);
//     *(ptr+4) = temp;
//     temp = * (ptr +2);
//     *(ptr +2) = *(ptr+3);
//     *(ptr+3) = temp;
// }

// void reverseArray(int* ptr, int size) {
//     for (int i = 0; i < size / 2; i++) {
//         int temp = ptr[i];
//         ptr[i] = ptr[size - (i + 1)];
//         ptr[size - (i + 1)] = temp;
//     }
// }

// Using swap(int*, int*)
void reverseArray(int* ptr, int size) {
    for (int i = 0; i < size / 2; i++) {
        // swap(&ptr[i], &ptr[size - (i + 1)]);
        // swap(&(*(ptr + i)), &(*(ptr + size - (i + 1))));
        swap(ptr + i, ptr + size - (i + 1));
    }
}

// void reverseArray(int ptr[6]){
//     for (int i = 0; i < 3; i++) {
//         int temp = ptr[i];
//         ptr[i] = ptr[size - (i + 1)];
//         ptr[size - (i + 1)] = temp;
//     }
// }

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}