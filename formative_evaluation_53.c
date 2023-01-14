#include <stdio.h>
#include <stdlib.h>

int first()
{
    int a = 10;
    int b = 20;
    int c = 30;
    printf("%d + %d = %d", a, b, c);
    return 0;
}

int second()
{
    double a = 80.5;
    double b = 22.34;
    double c = a + b;

    printf("%7.2f %7.2f %7.2f", a, b, c);
    return 0;
}

int third()
{
    int a = 50;
    double b = 100.12;

    printf("%.2f * %d = 5006", b, a);
    return 0;
}

int fourth()
{
    int a, b, c;
    printf("세 개의 정수를 입력하세요. (띄어쓰기로 구분)\n");
    scanf_s("%d %d %d", &a, &b, &c);

    int sum = a + b + c;
    int avg = sum / 3;

    printf("sum = %d\n", sum);
    printf("avg = %d", avg);

    return 0;
}

int fifth()
{
    double a;
    printf("yard? ");
    scanf_s("%lf", &a);

    printf("%.1lf * yard = %.1lf", a, 91.44 * a);
    return 0;
}

int main()
{
    // return first();
    // return second();
    // return third();
    // return fourth();
    return fifth();
}
