#include <stdio.h>
#include <stdlib.h>

int first()
{
	int a, b, c, d;
	printf("당신의 점수는? (국어, 영어, 수학, 컴퓨터 순, 띄어쓰기로 구분): ");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);

	int e = a + b + c + d;
	int f = e / 4;

	printf("sum = %d\n", e);
	printf("avg = %d\n", f);

	return 0;
}

int second()
{
	int a, b;
	printf("두 정수를 입력하세요 (띄어쓰기로 구분): ");
	scanf_s("%d %d", &a, &b);

	int c = a / b;
	int d = a % b;

	printf("%d / %d = %d...%d\n", a, b, c, d);
	return 0;
}

int third()
{
	int a, b;
	printf("가로와 세로의 길이를 입력하세요 (띄어쓰기로 구분): ");
	scanf_s("%d %d", &a, &b);

	a += 5;
	b *= 2;

	printf("width = %d\nlength = %d\narea = %d\n", a, b, a * b);
	return 0;
}

int fourth()
{
	int a, b;
	printf("두 개의 정수를 입력해주세요 (띄어쓰기로 구분): ");
	scanf_s("%d %d", &a, &b);

	printf("%d %d\n", ++a, b--);
	printf("%d %d\n", a, b);
	return 0;
}

int fifth()
{
	int a, b;
	printf("민수의 키와 몸무게를 입력해주세요 (띄어쓰기로 구분): ");
	scanf_s("%d %d", &a, &b);

	int c, d;
	printf("기영이의 키와 몸무게를 입력해주세요 (띄어쓰기로 구분): ");
	scanf_s("%d %d", &c, &d);

	int r = a > c && b > d;
	printf("%d", r);
	return 0;
}

int main()
{
	// return first();
	// return second();
	// return third();
	// return fourth();
	// return fifth();
}
