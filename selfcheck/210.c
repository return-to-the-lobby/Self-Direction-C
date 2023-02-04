#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	int numbers[5][5] = { {1, 1, 1, 1, 1} };

	for (int index = 1; index < 5; index++) {
		for (int array_index = 1; array_index < 5; array_index++) {
			numbers[index][0] = 1;
			numbers[index][array_index] += numbers[index][array_index - 1];
			numbers[index][array_index] += numbers[index - 1][array_index]; // 그냥 식 붙여도 됨
		}
	}

	for (int index = 0; index < 5; index++) {
		for (int array_index = 0; array_index < 5; array_index++) {
			printf("%d ", numbers[index][array_index]);
		}
		printf("\n");
	}
	
	return 0;
}
