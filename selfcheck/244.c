#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int check(int month, int day) {
	if (month > 13 || month < 1) return 0;
	else if (month % 2 == 0) {
		if (day < 1 || day > 30) return 0;
		else if (month == 2 && day > 29) return 0;
		else if (month <= 30) return 1;
	}
	else {
		if (day <= 31) return 1;
		else return 0;
	}
}

int main() {
	int month, day;
	scanf("%d %d", &month, &day);
	int result = check(month, day);
	if (result == 1) puts("OK!");
	else puts("BAD!");
	return 0;
}
