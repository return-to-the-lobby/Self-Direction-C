#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void make_square_with_numbers(int limit) {
	int value = 1;
	for (int index = 1; index < limit + 1; index++) {
		for (int count = 0; count < limit; count++) {
			printf("%d ", value);
			value++;
		}
		printf("\n");
	}
	return;
}

int main() {
	int limit;
	scanf("%d", &limit);
	make_square_with_numbers(limit);
	return 0;
}
