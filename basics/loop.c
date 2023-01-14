#include <stdio.h>
#include <stdlib.h>

int for_loop()
{
	for (int i = 1; 5 > i - 1; i++) {
		printf("%d\n", i);
	}
	return 0;
}

int while_loop()
{
	int i = 0;
	while (1) {
		if (i > 5) {
			break;
		}
		printf("%d\n", i);
		i += 1;
	}
	return 0;
}

int main() {
	for_loop();
	while_loop();
	return 0;
}
