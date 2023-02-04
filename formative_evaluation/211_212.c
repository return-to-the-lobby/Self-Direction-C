#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

// 211쪽, 212쪽에 걸쳐 있어서 따로 업로드.
int main() {
	int numbers[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	scanf("%d %d", &numbers[0], &numbers[1]);

	for (int index = 2; index < 10; index++) {
		numbers[index] = (numbers[index - 2] + numbers[index - 1]) % 10;
	}

	for (int index = 0; index < 10; index++) {
		printf("%d ", numbers[index]);
	}

	return 0;
}
