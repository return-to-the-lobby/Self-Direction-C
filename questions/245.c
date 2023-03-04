#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

int main() {
	int integers[2];
	float floats[2];

	scanf("%d %d", &integers[0], &integers[1]);
	scanf("%f %f", &floats[0], &floats[1]);

	int int_result = abs(integers[0] - integers[1]);
	float float_result = fabs(floats[0] - floats[1]);

	printf("두 정수의 차: %d\n두 실수의 차: %f\n", int_result, float_result);
	return 0;
}
