#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void calculate_all() {
	for (int count = 1; count <= 3; count++) {
		for (int number = 1; number <= 3; number++) {
			printf("%d + %d = %d\n", count, number, count + number);
		}
	}
}

int main() {
	calculate_all();
	return 0;
}
