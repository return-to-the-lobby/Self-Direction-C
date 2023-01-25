#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	int counts[26] = { 0 };
	while (1) {
		char character;
		scanf("%c", &character);
		if ((int)character != 32 && (int)character < 65 || (int)character > 90) break;

		counts[(int)(character - 65)] += 1;
	}

	for (int index = 0; index < 26; index++) {
		if (counts[index] < 1) continue;
		printf("%c: %d\n", (char)(index + 65), counts[index]);
	}
	return 0;
}
