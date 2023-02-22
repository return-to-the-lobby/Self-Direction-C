#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

float get_average(int korean, int english, int math) {
	return (korean + english + math) / 3.0;
}

int main() {
	int korean, english, math;
	scanf("%d %d %d", &korean, &english, &math);
	
	float average = get_average(korean, english, math);
	printf("평균: %.2f", average);
	return 0;
}
