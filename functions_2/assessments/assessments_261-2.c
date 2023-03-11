#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

int main() {
	double first, second;
	scanf("%lf %lf", &first, &second);

	int square_first = sqrt(first);
	int square_second = sqrt(second);

	int median_counts = abs(square_first - square_second);
	printf("%d", median_counts);
	return 0;
}
