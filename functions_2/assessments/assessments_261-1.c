#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void input(int array[15], int count) {
	for (int index = 0; index < count; index++) {
		scanf("%d", &array[index]);
	}
	return;
}

void swap(int* source, int* destination) {
	int temporary_source = *source;
	*source = *destination;
	*destination = temporary_source;
}

void sort(int array[15]) {
	for (int index = 0; index < 15; index++) {
		for (int number = index + 1; number < 15; number++) {
			if (array[number] > array[index]) {
				swap(&array[number], &array[index]);
			}
			else continue;
		}
	}
}

void output(int array[15], int count) {
	for (int index = 0; index < count; index++) {
		if (array[index] == 0) continue;
		else printf("%d ", array[index]);
	}
}

int main() {
	int count;
	scanf("%d", &count);

	int array[15];
	input(array, count);
	sort(array);
	output(array, count);
	return 0;
}
