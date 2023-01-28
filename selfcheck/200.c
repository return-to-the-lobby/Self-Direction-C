#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	int max;
	int response = scanf("%d", &max);
	if (response == EOF) return 1;
	else if (max > 100) return 1;

	int counts[100] = { 0, 100, max };
	printf("%d %d ", counts[1], counts[2]);
	for (int index = 3; index < 100; index++) {
		counts[index] = counts[index - 2] - counts[index - 1];
		printf("%d ", counts[index]);
		if (counts[index] < 0) break;
	}

	return 0;
}
