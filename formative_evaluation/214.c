#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	char array[3][5] = {
		{0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0},
	};
	
	for (int array_index = 0; array_index < 3; array_index++) {
		for (int index = 0; index < 5; index++) {
			scanf("%c", &array[array_index][index]);
			if (array[array_index][index] == (char)10) {
				array[array_index][index] = 0;
				index--;
			}
		}
	}

	for (int array_index = 0; array_index < 3; array_index++) {
		for (int index = 0; index < 5; index++) {
			printf("%c ", array[array_index][index] + (char)32);
		}
		printf("\n");
	}

	return 0;
}
