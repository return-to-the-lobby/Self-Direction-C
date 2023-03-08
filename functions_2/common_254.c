#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void swap(int* source, int* destination) {
	int temporary_source = *source;
	*source = *destination;
	*destination = temporary_source;
	return;
}

void sort(int array[5]) {
	for (int index = 0; index < 5; index++) {
		for (int number = index + 1; number < 5; number++) {
			if (array[number] < array[index]) {
				swap(&array[number], &array[index]);
			}
			else continue;
		}
	}
	return;
}

int main() {
	int array[5];
	for (int index = 0; index < 5; index++) {
		scanf("%d", &array[index]);
	}

	sort(array);
	for (int index = 0; index < 5; index++) {
		printf("%d ", array[index]);
	}
	return 0;
}
