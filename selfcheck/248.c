#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

int main() {
	int integers[2];
	float floats[2];

	scanf("%d %d", &integers[0], &integers[1]);
	scanf("%f %f", &floats[0], &floats[1]);

	int integer_higher;
	float float_lower;

	if (abs(integers[0]) > abs(integers[1])) {
		integer_higher = integers[0];
	}
	else {
		integer_higher = integers[1];
	}
	printf("\n");

	if (fabsf(floats[0]) < fabsf(floats[1])) {
		float_lower = floats[0];
	}
	else {
		float_lower = floats[1];
	}

	printf("%d\n%f\n", integer_higher, float_lower);
	return 0;
}
