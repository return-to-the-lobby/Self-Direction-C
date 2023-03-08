#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

int main() {
	float area;
	float base;
	float exponent;

	printf("Area of a square:");
	scanf("%f", &area);
	printf("A length of a side of the square: %f\n", sqrtf(area));

	printf("Base and exponent:");
	scanf("%f %f", &base, &exponent);
	printf("%f ^ %f = %f", base, exponent, powf(base, exponent));
	return 0;
}
