#include <stdio.h>
#include <stdlib.h>

int max_() {
	int n[10];

	int m = 0;

	for (int i = 0; i < 10; i++) {
		scanf_s(" %d", &n[i]);
		if (n[i] > m) m = n[i];
	}

	printf("%d", m);

	return 0;
}

int min_() {
	int n[10];

	int m = 4294967296;

	for (int i = 0; i < 10; i++) {
		scanf_s(" %d", &n[i]);
		if (m > n[i]) m = n[i];
	}

	printf("%d", m);

	return 0;
}
