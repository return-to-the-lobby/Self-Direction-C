#include <stdio.h>
#include <stdlib.h>

int fourth()
{
	int a, b, c;
	printf("두 개의 정수를 입력하세요 (띄어쓰기로 구분): ");
	scanf_s("%d %d", &a, &b);
	c = a++ * --b;
	printf("%d %d %d", a, b, c);
	return 0;
}

int fifth()
{
	int a, b, c;
	printf("세 개의 정수를 입력하세요 (띄어쓰기로 구분): ");
	scanf_s("%d %d %d", &a, &b, &c);
	int r1 = (a == b);
	int r2 = (b == c);
	int r3 = (a != b);
	int r4 = (b != c);

	printf("%d %d %d %d", r1, r2, r3, r4);
	return 0;
}

int main()
{
	// return fourth();
	// return fifth();
}
