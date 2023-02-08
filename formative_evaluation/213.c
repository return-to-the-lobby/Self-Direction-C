#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void seventh() {
	int first_array[2][3] = { {0, 0, 0}, {0, 0, 0} };
	int second_array[2][3] = { {0, 0, 0}, {0, 0, 0} };
	int result_array[2][3] = { {0, 0, 0}, {0, 0, 0} };

	printf("first array\n");
	for (int array = 0; array < 2; array++) {
		for (int index = 0; index < 3; index++) {
			scanf("%d", &first_array[array][index]);
			result_array[array][index] = first_array[array][index];
		}
	}
	printf("\n");

	printf("second array\n");
	for (int array = 0; array < 2; array++) {
		for (int index = 0; index < 3; index++) {
			scanf("%d", &second_array[array][index]);
			result_array[array][index] *= second_array[array][index];
		}
	}
	printf("\n");

	for (int array = 0; array < 2; array++) {
		for (int index = 0; index < 3; index++) {
			printf("%d ", result_array[array][index]);
		}
		printf("\n");
	}
	return;
}

void eighth() {
	int array[4][2] = { {0, 0}, {0, 0}, {0, 0}, {0, 0} };

	for (int array_index = 0; array_index < 4; array_index++) {
		for (int index = 0; index < 2; index++) {
			scanf("%d", &array[array_index][index]);
		}
	}

	for (int array_index = 0; array_index < 4; array_index++) {
		int average = 0;
		for (int index = 0; index < 2; index++) {
			average += array[array_index][index];
		}
		average /= 2;
		printf("%d ", average);
	}
	printf("\n");
	
	for (int index = 0; index < 2; index++) {
		int average = 0;
		for (int array_index = 0; array_index < 4; array_index++) {
			average += array[array_index][index];
		}
		average /= 4;
		printf("%d ", average);
	}
	printf("\n");
	
	int result = 0;
	for (int array_index = 0; array_index < 4; array_index++) {
		for (int index = 0; index < 2; index++) {
			result += array[array_index][index];
		}
	}
	printf("%d", result / 8);
	return;
}

void ninth() {
	int size = 0;
	scanf("%d", &size);

	int pascal[10][10] = { {1}, {1, 1}, {1}, {1}, {1}, {1}, {1}, {1}, {1}, {1} };
	for (int pascal_index = 2; pascal_index < size; pascal_index++) {
		for (int index = 1; index <= pascal_index; index++) {
			pascal[pascal_index][index] = pascal[pascal_index - 1][index - 1] + pascal[pascal_index - 1][index];
		}
	}

	for (int pascal_index = size - 1; pascal_index > -1; pascal_index--) {
		for (int index = 0; index < 10; index++) {
			if (pascal[pascal_index][index] < 1) continue;
			printf("%d ", pascal[pascal_index][index]);
		}
		printf("\n");
	}
	return;
}

int main() {
	// seventh();
	// eighth();
	// ninth();
	return 0;
}
