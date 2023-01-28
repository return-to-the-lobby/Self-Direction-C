#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	int second_dimension_array[3][5] = {
		{5, 8, 10, 6, 4}, {11, 20, 1, 13, 2}, {7, 9, 14, 22, 3}
	};

	for (int index = 0; index < 3; index++) {
		for (int second_index = 0; second_index < 5; second_index++) {
			printf("%2d   ", second_dimension_array[index][second_index]);
		}
		printf("\n");
	}

	return 0;
}
