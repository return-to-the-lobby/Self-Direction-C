#include <stdio.h>
#include <stdlib.h>

int third()
{
	int a;
	printf("아무 수나 입력하세요: ");
	scanf_s("%d", &a);
	printf("%d\n", a++);
	printf("%d\n", ++a);
	return 0;
}

int fourth()
{
	int a, b, c;
	printf("두 수를 입력하세요 (띄어쓰기로 구분): ");
	scanf_s("%d %d", &a, &b);
	c = ++a + b--;
	printf("a = %d, b = %d, c = %d", a, b, c);
	return 0;
}

int main()
{
	// return third();
	// return fourth();
}
