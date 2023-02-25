#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

inline int swap_value(int first, int second) {
	int temp = second;
	second = first;
	first = temp;
	return printf("첫 번째 함수 실행 중: first = %d, second = %d\n", first, second);
}

inline int swap_reference(int *first, int *second) { // C에는 Pass By Reference 같은 기능이 없다. 그러므로 포인터를 사용한다.
	int temp = *second;
	*second = *first;
	*first = temp;
	return printf("두 번째 함수 실행 중: first = %d, second = %d\n", (int)*first, (int)*second);
}

int main() {
	int first, second;
	scanf("%d %d", &first, &second);
	swap_value(first, second);
	printf("첫 번째 함수 실행 후: first = %d, second = %d\n", first, second);
	swap_reference(&first, &second);
	printf("두 번째 함수 실행 후: first = %d, second = %d\n", first, second);
	return 0;
}
