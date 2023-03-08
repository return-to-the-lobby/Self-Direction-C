#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

float get_radius(int area) {
	return sqrtf(area / 3.14);
}

int main() {
	int area;
	scanf("%d", &area);

	float radius = get_radius(area);
	printf("%.2f", radius);
	return 0;
}
