#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define MULTI(first, second) (first + 10) * (second - 5)

int main() {
	int first, second;
	scanf("%d %d", &first, &second);
	int result = MULTI(first, second);
	printf("(%d + 10) * (%d - 5) = %d", first, second, result);
	return 0;
}
