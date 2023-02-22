#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int square(int number, int exponent) {
	int result = number;
	for (int _ = 0; _ < exponent - 1; _++) result *= number;
	return result;
}

int main() {
	int number, exponent;
	scanf("%d %d", &number, &exponent);

	int result = square(number, exponent);
	printf("%d", result);
	return 0;
}
