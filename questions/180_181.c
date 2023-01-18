#include <stdio.h>
#include <stdlib.h>

int main() {
	int n[10];

	int m = 0;

	for (int i = 0; i < 10; i++) {
		scanf_s(" %d", &n[i]);
		if (n[i] > m) m = n[i];
	}

	printf("%d", m);

	return 0;
}
