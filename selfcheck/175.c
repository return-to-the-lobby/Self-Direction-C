// 174쪽은 거의 똑같은 문제라 없습니다.

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[100];

	int i;

	for (i = 0; i < 100; i++) {
		scanf(" %d", &a[i]);

		if (a[i] == 0) {
			break;
		}
	}

	for (int b = 1; b < i; b+=2) {
		printf(" %d", a[b]);
	}

	return 0;
}