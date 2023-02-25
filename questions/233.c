#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int first, second;
int result_plus, result_multi;

inline int input() {
	return scanf("%d %d", &first, &second);
}

void calculate() {
	result_plus = first + second;
	result_multi = first * second;
	return;
}

inline int output() {
	return printf("합: %d, 곱: %d", result_plus, result_multi);
}

int main() {
	input();
	calculate();
	output();
	return 0;
}
