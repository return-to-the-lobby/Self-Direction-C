#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void calculate(int *first, int *second) { 
	if (*first > *second) {
		*first /= 2;
		*second *= 2;
	}
	else {
		*first *= 2;
		*second /= 2;
	}
	return;
}

int main() {
	int first, second;
	scanf("%d %d", &first, &second);

	calculate(&first, &second);
	printf("first = %d, second = %d", first, second);
	return 0;
}
