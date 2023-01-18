#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[100];

	int i;

	for (i = 0; i < 100; i++) {
		scanf_s(" %d", &a[i]);

		if (a[i] == 0) {
			break;
		}
	}

	for (int b = 1; b < i; b+=2) {
		printf(" %d", a[b]);
	}

	return 0;
}
