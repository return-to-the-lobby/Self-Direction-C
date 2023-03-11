#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

int main() {
	int number;
	scanf("%d", &number);

	if (number < 0 || number > 20) {
		puts("Input number must be lower than 20 and must be higher than 0.");
		return 1;
	}
	int result = pow(2, number);
	printf("%d", result);
	return 0;
}
