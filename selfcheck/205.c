#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	int first[2][4], second[2][4];

	for (int row = 0; row < 2; row++) {
		printf("첫번째 배열 %d: ", row);
		for (int line = 0; line < 4; line++) {
			scanf("%d", &first[row][line]);
		}
	}

	for (int row = 0; row < 2; row++) {
		printf("두번째 배열 %d: ", row);
		for (int line = 0; line < 4; line++) {
			scanf("%d", &second[row][line]);
		}
	}

	for (int row = 0; row < 2; row++) {
		for (int line = 0; line < 4; line++) {
			printf("%d ", first[row][line] * second[row][line]);
		}
		printf("\n");
	}

	return 0;
}
