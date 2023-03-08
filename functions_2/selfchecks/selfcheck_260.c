#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SQUARE_FIRST(first, second) (first - second) * (first - second)
#define SQUARE_SECOND(first, second) (first + second) * (first + second) * (first + second)

int main() {
	double first, second;
	scanf("%lf %lf", &first, &second);

	double result_first = SQUARE_FIRST(first, second);
	double result_second = SQUARE_SECOND(first, second);

	printf("(%.0lf - %.0lf) ^ 2 = %.0lf\n(%.0lf + %.0lf) ^ 3 = %.0lf", first, second, result_first, first, second, result_second);
	return 0;
}
