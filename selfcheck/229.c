// Literally does the same thing with questions/228.c
// Why? I don't know.

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

float calculate(float first, float second, char expression) {
	if (expression == '+') return first + second;
	else if (expression == '-') return first - second;
	else if (expression == '/') return first / second;
	else if (expression == '*') return first * second;
	else return 0;
}

int main() {
	int first, second;
	char expression;

	scanf("%d %c %d", &first, &expression, &second);
	float result = calculate(first, second, expression);
	printf("%f", result);
	return 0;
}
