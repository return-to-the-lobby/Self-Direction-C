#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int first() {
	int indexes[6] = { 0, 0, 0, 0, 0, 0 };
	for (int _ = 0; _ < 10; _++) {
		int index;
		scanf("%d", &index);
		indexes[index - 1] += 1;
	}

	for (int index = 0; index < 6; index++) {
		printf("%d: %d\n", index + 1, indexes[index]);
	}

	return 0;
}

void second() {
	int scores[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	while (1) {
		int score;
		scanf("%d", &score);

		if (score == 0) break;
		else {
			int index = score / 10 - 1;
			scores[index] += 1;
		}
	}

	for (int index = 9; index >= 0; index--) {
		if (scores[index] < 1) continue;
		printf("%d: %d Person\n", index * 10 + 10, scores[index]);
	}

	return;
}

void third() {
	int numbers[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	scanf("%d %d", &numbers[0], &numbers[1]);

	for (int index = 2; index < 10; index++) {
		numbers[index] = (numbers[index - 2] + numbers[index - 1]) % 10;
	}

	for (int index = 0; index < 10; index++) {
		printf("%d ", numbers[index]);
	}

	return;
}


int main() {
	// first();
	// second();
	// third();
	return 0;
}
