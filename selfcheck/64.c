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

int main()
{
	// return fourth();
	return 0;
}
