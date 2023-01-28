#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	int fibonacci[41] = { 0, 1, 1 }; // 피보나치 수열, C6001 때문에 41로
	
	for (int index = 3; index <= 40; index++) {
		fibonacci[index] = fibonacci[index - 1] + fibonacci[index - 2];
	}

	for (int index = 10; index <= 40; index += 10) {
		printf("피보나치 수열 %d: %d\n", index, fibonacci[index]);
	}

	return 0;
}
