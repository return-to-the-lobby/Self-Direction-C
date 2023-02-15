#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int line() {
	return puts("~!@#$%^&*()_|");
}

int main() {
	int loop;
	scanf("%d", &loop);
	for (int _ = 0; _ < loop; _++) {
		line();
	}
	return 0;
}
