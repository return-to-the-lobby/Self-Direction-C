#include <stdio.h>
#include <stdlib.h>

int main() {
	int numbers[11] = { 0 };
	int seen[11] = { 0 };

	for (int index = 0; index < 11; index++) {
		scanf_s("%d", &numbers[index]);
		if (numbers[index] < 1 || numbers[index] > 10) break;
	}

	for (int index = 0; index < 11; index++) {
		for (int count = index + 1; count < 10; count++) {
			if (numbers[count] < numbers[index]) {
				int item = numbers[count];
				numbers[count] = numbers[index];
				numbers[index] = item;
			}
		}
	}

	for (int index = 0; index < 11; index++) {
		for (int count = 0; count < 11; count++) {
			if (numbers[index] == numbers[count]) {
				seen[index] += 1;
				if (index != count) {
					numbers[count] = 0;
				}
			}
		}

		if (numbers[index] == 0) continue;

		printf("%d: %d개\n", numbers[index], seen[index]);
	}

	return 0;
}
