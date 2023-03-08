#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

float get_area(float radius) {
	return radius * radius * 3.14;
}

int main() {
	float radius;
	printf("원의 반지름:");
	scanf("%f", &radius);

	float area = get_area(radius);

	float area_floor = floorf(area);
	float area_round = roundf(area);
	float area_ceil = ceilf(area);

	printf("원의 넓이: %.0f\n내림: %.0f\n반올림: %.0f\n올림:%.0f\n", area, area_floor, area_round, area_ceil);
	return 0;
}
