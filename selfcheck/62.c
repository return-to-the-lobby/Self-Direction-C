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

int main()
{
	// return third();
	return 0;
}
