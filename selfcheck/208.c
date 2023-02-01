#define _CRT_SECURE_NO_WARNINGS // scanf 오류 방지

#include <stdio.h>
#include <stdlib.h>

int main() {
	int scores[5][4] = {
		{0, 0, 0, 0}, {0, 0, 0, 0},
		{0, 0, 0, 0}, {0, 0, 0, 0}, { 0, 0, 0, 0 }
	}; // C6001 오류 방지
	int success = 0;

	for (int index = 0; index < 5; index++) {
		scanf( 
			"%d %d %d %d", 
			&scores[index][0], 
			&scores[index][1], 
			&scores[index][2], 
			&scores[index][3] // 이중 for문보다 간단함
		);
	}

	for (int index = 0; index < 5; index++) {
		int average = 0;
		for (int item = 0; item < 4; item++) {
			average += scores[index][item];
		}
		if (average / 4 >= 80) {
			success++;
			printf("pass");
		}
		else printf("fail");

		printf("\n");
		average = 0;
	}

	printf("Successful: %d", success);

	return 0;
}
