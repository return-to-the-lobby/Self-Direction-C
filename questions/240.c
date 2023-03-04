#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void swap(int *first_item, int *second_item) {
	int temp = *second_item;
	*second_item = *first_item;
	*first_item = temp;
	return;
}

void sort(int array[]) {
	for (int index = 0; index < 6; index++) {
		for (int number = index + 1; number < 6; number++) {
			if (array[index] > array[number]) {
				swap(&array[index], &array[number]);
			}
		}
	}
	return;
}

void input(int array[]) {
	for (int index = 0; index < 6; index++) {
		scanf("%d", &array[index]);
	}
	return;
}

void output(int array[]) {
	for (int index = 0; index < 6; index++) {
		printf("%d ", array[index]);
	}
	return;
}

int main() {
	int array[6];
	input(array);
	sort(array);
	output(array);
	return 0;
}
