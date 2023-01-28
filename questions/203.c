#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	int first[3][3], second[3][3];

	for (int row = 0; row < 3; row++) {
		printf("첫번째 배열 %d: ", row);
		for (int line = 0; line < 3; line++) {
			scanf("%d", &first[row][line]);
		}
	}

	for (int row = 0; row < 3; row++) {
		printf("두번째 배열 %d: ", row);
		for (int line = 0; line < 3; line++) {
			scanf("%d", &second[row][line]);
		}
	}

	for (int row = 0; row < 3; row++) {
		for (int line = 0; line < 3; line++) {
			printf("%d ", first[row][line] + second[row][line]);
		}
		printf("\n");
	}

	return 0;
}
