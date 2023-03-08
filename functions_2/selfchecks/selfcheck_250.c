#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#include <math.h> 

int main() {
	double first, second, third;

	scanf("%lf %lf %lf", &first, &second, &third);
	if (first < -1000 && first > 1000 || second < -1000 && second > 1000 || third < -1000 && third > 1000) {
		exit(-1);
	}

	double high = 0;
	double mid = 0;
	double low = 0;

	double extra[2] = { 0, 0 };
	
	if (first > second && first > third) {
		high = first;
		extra[0] = second;
		extra[1] = third;
	}
	else if (second > first && second > third) {
		high = second;
		extra[0] = first;
		extra[1] = third;
	}
	else if (third > first && third > second) {
		high = third;
		extra[0] = first;
		extra[1] = second;
	}

	if (extra[0] > extra[1]) {
		mid = extra[0];
		low = extra[1];
	}
	else {
		mid = extra[1];
		low = extra[0];
	}
	
	high = ceil(high);
	mid = round(mid);
	low = floor(low);

	printf("%.0lf %.0lf %.0lf", high, low, mid);
	return 0;
}
