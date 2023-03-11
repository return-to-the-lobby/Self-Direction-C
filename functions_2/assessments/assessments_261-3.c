#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

int main() {
	int numbers[5];

	for (int index = 0; index < 5; index++) {
		scanf("%d", &numbers[index]);
	}

	int result = 0;
	for (int index = 0; index < 5; index++) {
		result += abs(numbers[index]);
	}

	printf("%d", result);
	return 0;
}
