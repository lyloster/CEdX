#include <stdio.h>
#include <stdlib.h>

// {4, 2, 5, 3, 8, 9} -> {4, 2, 0, 0, 8, 0}
int* zeroOutOddNumbers(int* arr, int size);

int main(void) {
	int arr[] = {4, 2, 5, 3, 8, 9};
	int size = 6;

	int* newArray = zeroOutOddNumbers(arr, size);

	printf("Original Array:\n");
	for (int i = 0; i < size; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");

	printf("New Array:\n");
	for (int i = 0; i < size; i++) {
		printf("%d\t", newArray[i]);
	}
	printf("\n");
	free(newArray);

	// If we try to print our array again after free, the memory is already reclaimed
	printf("New Array:\n");
	for (int i = 0; i < size; i++) {
		printf("%d\t", newArray[i]);
	}
	printf("\n");


	return 0;
}

int* zeroOutOddNumbers(int* arr, int size) {
	// int newArr[size]; // WRONG: This local array is in the stack memory which can be reclaimed after we exit the function.
	int* newArr = malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) { // Even
			newArr[i] = arr[i];
		} else { // Odd
			newArr[i] = 0;
		}
	}

	// printf("(Inside zeroOutOddNumbers) New Array:\n");
	// for (int i = 0; i < size; i++) {
	// 	printf("%d\t", newArr[i]);
	// }
	// printf("\n");

	return newArr;
}