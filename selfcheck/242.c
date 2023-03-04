#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void input(int array[]) {
	int limit;
	scanf("%d", &limit);

	for (int index = 0; index < limit; index++) {
		scanf("%d", &array[index]);
	}
	return;	
}

void output(int array[]) {
	for (int index = 0; index < 10; index++) {
		if (array[index] < 1) continue;
		printf("%d ", array[index]);
	}
	return;
}

void swap(int* source, int* destination) {
	int temporary = *destination;
	*destination = *source;
	*source = temporary;
	return;
}

void sort(int array[]) {
	for (int count = 0; count < 10; count++) {
		for (int index = count + 1; index < 10; index++) {
			if (array[count] < array[index]) {
				swap(&array[index], &array[count]);
			}
			else {
				continue;
			}
		}
	}
	return;
}

int main() {
	int array[10];
	input(array);
	sort(array);
	output(array);
	return 0;
}
