#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define SEVEN 7

void swap(int* source, int* destination) {
	int temporary_source = *source;
	*source = *destination;
	*destination = temporary_source;
	return;
}

void sort(int array[7]) {
	// I really don't know what this problem's description means
	/* 
		"define 7 as a macro constant and sort an array with bubble sort method
		but repeat it 3 times and print output."
		"The tip is, start "i" variable with 1 and end it with 3."
		I couldn't understand it. 
		Therefore, I just used a normal bubble sort method instead of the method that descripted in the problem.
	*/
	
	for (int index = 0; index < SEVEN; index++) {
		for (int count = index + 1; count < SEVEN; count++) {
			if (array[count] < array[index]) {
				swap(&array[count], &array[index]);
			}
			else continue;
		}
	}
	return;
}

int main() {
	int array[SEVEN];

	for (int index = 0; index < SEVEN; index++) {
		scanf("%d", &array[index]);
	}
	sort(array);
	for (int index = 0; index < SEVEN; index++) {
		printf("%d ", array[index]);
	}
	return 0;
}
