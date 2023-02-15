#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int calculate_triangle_dimension(int radius) {
	return radius * radius * 3.14;
}

int main() {
	int radius;
	scanf("%d", &radius);
	float result = calculate_triangle_dimension(radius);
	printf("%.2f", result);
	return 0;
}
