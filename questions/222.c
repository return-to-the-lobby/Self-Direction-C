#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void make_triangle_with_star(int limit) {
	for (int index = 1; index < limit + 1; index++) {
		for (int count = 0; count < index; count++) {
			printf("*");
		}
		printf("\n");
	}
	return;
}

int main() {
	int limit;
	scanf("%d", &limit);
	make_triangle_with_star(limit);
	return 0;
}
