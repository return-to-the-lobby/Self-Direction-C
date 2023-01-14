#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int first()
{
	int a, b;
	printf("두 개의 정수를 입력하세요 (띄어쓰기로 구분): ");
	scanf_s("%d %d", &a, &b);

	int r;

	if (b > a) {
		r = b - a;
	}
	else {
		r = a - b;
	}

	printf("%d", r);
	return 0;
}

int second()
{
	int a;
	printf("정수를 하나 입력하세요: ");
	scanf_s("%d", &a);

	if (a < 0) {
		printf("minus");
	}
	else if (a == 0) {
		printf("zero");
	}
	else {
		printf("plus");
	}

	return 0;
}

int third()
{
	int a;
	printf("연도를 입력하세요: ");
	scanf_s("%d", &a);

	int r = a % 400;

	if (r == 0) {
		printf("윤년입니다.");
	}
	else {
		printf("평년입니다.");
	}

	return 0;
}

int fourth()
{
	int a;
	printf("번호를 입력하세요: ");
	scanf_s("%d", &a);

	char* r;

	if (a == 1) {
		r = "개";
	}
	else if (a == 2) {
		r = "고양이";
	}
	else if (a == 3) {
		r = "병아리";
	}
	else {
		r = "모릅니다";
	}

	printf("%s", r);
	return 0;
}

int fifth()
{
	int a;
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	
	printf("달을 입력하세요: ");
	scanf_s("%d", &a);

	int r;

	if (a < 1 && a > 12) {
		printf("제대로된 달을 입력하세요");
		return 0;
	}
	 
	switch (a) {
	case 2:
		if (tm.tm_year % 400 != 0) {
			r = 28;
		}
		else {
			r = 29;
		}
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		r = 30;
		break;

	default:
		r = 31;
	}
	
	printf("%d", r);
	return 0;
}

int main() {
	// return first();
	// return second();
	// return third();
	// return fourth();
	// return fifth();
}
