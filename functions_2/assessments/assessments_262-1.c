#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

int main() {
	double numbers[3];
	for (int index = 0; index < 3; index++) {
		scanf("%lf", &numbers[index]);
	}
	double result = 0;
	double result_rounded = 0;
	for (int index = 0; index < 3; index++) {
		result += numbers[index];
		result_rounded += round(numbers[index]);
	}

	result = round(result / 3);
	result_rounded = round(result_rounded / 3);
	printf("%.0lf\n%.0lf\n", result, result_rounded);
	return 0;
}
