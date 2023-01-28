#define _CRT_SECURE_NO_WARNINGS // 없으면 scanf에서 오류남

#include <stdio.h>
#include <stdlib.h>

int main() {
	int counts[100] = { 0 }; // C6001 
	int index = 0;

	while (scanf("%d", &index) != EOF) {
		if (index == 0) break;
		counts[index / 10]++;
	}

	for (int index = 0; index < 100; index++) {
		if (counts[index] == 0) continue;
		printf("%d : %d\n", index, counts[index]);
	}

	return 0;
}
