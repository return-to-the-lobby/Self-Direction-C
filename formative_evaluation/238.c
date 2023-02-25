#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int fourth_function(int first, int second) {
	return abs(first * first - second * second); // 책에서 8, 10 입력했을 때 양수가 나왔음
}

inline int fourth() {
	int first, second;
	scanf("%d %d", &first, &second);
	int result = fourth_function(first, second);
	return printf("%d", result);
}

inline int fifth_function(int first, int second, int third) {
	return printf("%d %d %d %d", first, second, third, first + second + third);
}

/*
	정수 3개를 입력 받아서 first, second, third라는 변수에
	저장하고, fifth_function(int first, int second, int third)라는 함수를 
	호출하여 printf를 이용해 세 과목의 점수와 그 점수들의 합을 출력한다.
*/
void fifth() {
	int first, second, third;
	scanf("%d %d %d", &first, &second, &third);
	fifth_function(first, second, third);
	return;
}

int main() {
	// fourth();
	// fifth();
	return 0;
}
