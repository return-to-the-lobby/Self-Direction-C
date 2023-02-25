#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

inline int input(int* first, int* second) {
	return scanf("%d %d", first, second);
}

void output(int number) {
	printf("======= %d단 ======= \n", number);
	for (int index = 1; index <= 9; index++) { // int index = 1; index < 10; index++
		printf("%d * %d = %2d \n", number, index, number * index);
	}
	return;
}

int main() {
	int first, second;
	input(&first, &second);

	for (int count = first; count <= second; count++) { // int count = first; count < second + 1; count++
		output(count);
	}
	return 0;
}
