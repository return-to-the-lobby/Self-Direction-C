#include <stdio.h>
#include <stdlib.h>

int main() {
	int numbers[5] = { 95, 75, 85, 100, 50 };
	int index;

	for (index = 0; index < 4; index++) {
		for (int _index = index + 1; _index < 5; _index++) {
			if (numbers[index] > numbers[_index]) {
				int _item = numbers[index];
				numbers[index] = numbers[_index];
				numbers[_index] = _item;
			}
		
		}
	}

	for (int _index = 0; _index < 5; _index++) {
		printf("%d ", numbers[_index]);
	}

	return 0;
}
