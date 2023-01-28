#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	int counts[10] = { 0 };
	int index = 0;

	while (scanf("%d", &index) != EOF) {
		if (index == 0) break;
		counts[index % 10] += 1;
	}

	for (int index = 0; index < 10; index++) {
		if (counts[index] == 0) continue;
		printf("%d: %d개\n", index, counts[index]);
	}

	return 0;
}
