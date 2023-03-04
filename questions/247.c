#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

int main() {
	float area;
	float base;
	float exponent;

	printf("정사각형의 넓이: ");
	scanf("%f", &area);
	printf("정사각형의 한 변의 길이: %f\n", sqrtf(area));

	printf("밑과 지수: ");
	scanf("%f %f", &base, &exponent);
	printf("%f승의 %f승은 %f입니다.", base, exponent, powf(base, exponent));
	return 0;
}
