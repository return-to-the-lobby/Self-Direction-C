#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void swap(int* source, int* destination) {
	int temporary_source = *source;
	*source = *destination;
	*destination = temporary_source;
	return;
}

void sort(int array[10]) {
	for (int index = 0; index < 10; index++) {
		for (int number = index + 1; number < 10; number++) {
			if (array[index] < array[number]) {
				swap(&array[index], &array[number]);
			}
			for (int count = 0; count < 10; count++) {
				printf("%d ", array[count]);
			}
			printf("\n");
		}
	}
	return;
}

int main() {
	int array[10];
	for (int index = 0; index < 10; index++) {
		scanf("%d", &array[index]);
	}

	sort(array);
	for (int index = 0; index < 10; index++) {
		printf("%d ", array[index]);
	}
	return 0;
}
