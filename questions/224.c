#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int add(int first, int second) {
	return first + second;
}

int subtract(int first, int second) {
	return abs(first - second);
}

int main() {
	int first, second;
	scanf("%d %d", &first, &second);
	printf("두 수의 합: %d\n두 수의 차의 절댓값: %d", add(first, second), subtract(first, second));
	return 0;
}
