#include <stdio.h>
#include <stdlib.h>

int main() {
	char a[10];

	for (int i = 0; i <= 9; i++) {
		scanf_s(" %c", &a[i]);
 	}

	for (int i = 0; i <= 9; i++) {
		printf("%c", a[i]);
	}
	
	return 0;
}
