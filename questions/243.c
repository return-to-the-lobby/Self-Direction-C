#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void input(int array[]) {
	puts("세 과목의 점수를 입력해주세요.");
	for (int index = 0; index < 3; index++) {
		scanf("%d", &array[index]);
	}
	return;
}

int __cdecl output(int result) {
	if (result == 1) {
		return puts("합격입니다.");
	}
	else {
		return puts("불합격입니다.");
	}
}

int check(int scores[]) {
	int summary = 0;
	for (int index = 0; index < 3; index++) {
		summary += scores[index];
		if (scores[index] < 40) break;
		else continue;
	}
	if (summary / 3 < 60) return 0;
	else return 1;
}

int main() {
	int scores[3];
	input(scores);
	int result = check(scores);
	output(result);
	return 0;
}
