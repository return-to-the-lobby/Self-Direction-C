#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	int second_dimension_array[3][3] = {
		{3, 5, 4}, {2, 6, 7}, {8, 10, 1}
	};

	for (int index = 0; index < 3; index++) {
		for (int second_index = 0; second_index < 3; second_index++) {
			printf("%d ", second_dimension_array[index][second_index]);
		}
		printf("\n");
	}

	return 0;
}
