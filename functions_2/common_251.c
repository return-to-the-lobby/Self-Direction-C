#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

double get_circumference(double radius) {
	return radius * 2 * 3.14;
}

int main() {
	double radius;
	scanf("%lf", &radius);

	double circumference = get_circumference(radius);
	printf("%.2lf", circumference);
	return 0;
}
