#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int plus(int number) {
	return printf("10 큰 수: %d\n", number + 10);
}

int minus(int number) {
	return printf("10 작은 수: %d\n", number - 10);
}

int main() {
	int number;
	scanf("%d", &number);

	plus(number);
	minus(number);
	return 0;
}
