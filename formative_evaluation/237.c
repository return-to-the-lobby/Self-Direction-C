#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int first_function() {
	return puts("@@@@@@@@@@");
}

void first() {
	for (int count = 0; count < 3; count++) {
		switch (count) {
		case(0):
			puts("first");
			first_function();
		case(1):
			puts("second");
			first_function();
		case(2):
			puts("third");
			first_function();
		default:
			exit(1); // 알 수 없는 이유로 루프를 한 번 더 돌았을 때 발생하는 이벤트
		}
	}
	return;
}

int second_function(int number) {
	int result = 0;
	for (int integer = 0; integer <= number; integer++) {
		result += integer;
	}
	return result;
}

inline int second() {
	int input;
	scanf("%d", &input);
	int result = second_function(input);
	return printf("%d", result);
}

void third_function(int input) {
	for (int number = 1; number <= input; number++) {
		int current = number;
		for (int count = 0; count < input; count++) {
			printf("%d ", current);
			current += number;
		}
		printf("\n");
	}
	return;
}

void third() {
	int input;
	scanf("%d", &input);
	return third_function(input);
}

int main() {
	// first();
	// second();
	// third();
	return 0;
}
