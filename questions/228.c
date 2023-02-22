#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

float calculate(float first, float second, char expression) {
	switch (expression) {
	case '+':
		return first + second;
	case '-':
		return first - second;
	case '/':
		return first / second;
	case '*':
		return first * second;
	default:
		return 0;
	}
}

int main() {
	int first, second;
	char expression;

	scanf("%d %c %d", &first, &expression, &second);
	float result = calculate(first, second, expression);
	printf("%f", result);
	return 0;
}
