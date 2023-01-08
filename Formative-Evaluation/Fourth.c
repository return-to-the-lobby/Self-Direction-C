#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("세 개의 정수를 입력하세요.\n");
    scanf("%d %d %d", &a, &b, &c);

    int sum = a + b + c;
    int avg = sum / 3;

    printf("sum = %d\n", sum);
    printf("avg = %d", avg);

    return 0;
}
