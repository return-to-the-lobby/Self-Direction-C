#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int fourth() {
	int array[4][4] = {
		{ 3, 5, 9 },
		{ 2, 11, 5 },
		{ 8, 30, 10 },
		{ 22, 5, 1 },
	};

	int result = 0;
	for (int index = 0; index < 4; index++) {
		for (int array_index = 0; array_index < 3; array_index++) {
			printf("%2d ", array[index][array_index]);
			result += array[index][array_index];
		}
		printf("\n");
	}

	printf("%d", result);

	return 0;
}

int fifth() {
	int scores[4][3] = {
		{ 0, 0, 0 },
		{ 0, 0, 0 },
		{ 0, 0, 0 },
		{ 0, 0, 0 },
	};

	for (int index = 0; index < 4; index++) {
		printf("%dclass? ", index + 1);
		for (int array_index = 0; array_index < 3; array_index++) {
			scanf("%d", &scores[index][array_index]);
		}
	}

	for (int index = 0; index < 4; index++) {
		int result = 0;
		for (int array_index = 0; array_index < 3; array_index++) {
			result += scores[index][array_index];
		}
		printf("%dclass : %d\n", index + 1, result);
	}

	return 0;
}

void sixth() {
	int array[5][5] = { {1, 0, 1, 0, 1} };
	for (int index = 1; index < 5; index++) {
		for (int array_index = 0; array_index < 5; array_index++) {
			array[index][array_index] = array[index - 1][array_index + 1];
			if (array_index > 0 && array_index < 4) array[index][array_index] += array[index - 1][array_index - 1];
		}
	}

	for (int index = 0; index < 5; index++) {
		for (int array_index = 0; array_index < 5; array_index++) {
			printf("%d ", array[index][array_index]);
		}
		printf("\n");
	}
	return;
}

int main() {
	// fourth();
	// fifth();
	// sixth();
	return 0;
}
