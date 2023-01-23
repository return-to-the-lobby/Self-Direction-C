#include <stdio.h>
#include <stdlib.h>

int seventh()
{
	float a[6];
	float r = 0;
	for (int i = 0; i < 6; i++) {
		scanf_s(" %f", &a[i]);
		r += a[i];
	}
	r /= 6.0f * 10;
	printf("%.1f", r);
	return 0;
}

int tenth()
{
	int a;
	int b[5] = { 0, 0, 0, 0, 0 }; // C6001 개같은거

	scanf_s("%d", &a);
	for (int i = 0; i < a; i++) scanf_s(" %d", &b[i]);

	/* 
	귀찮아서 이미 만든 거 복붙함.
	소스: https://github.com/return-to-the-lobby/Self-Direction-C/blob/main/questions/186_187.c 
	*/

	int index;

	for (index = 0; index < 4; index++) {
		for (int _index = index + 1; _index < 5; _index++) {
			if (b[index] > b[_index]) {
				int _item = b[index];
				b[index] = b[_index];
				b[_index] = _item;
			}
		}
	}

	for (int i = 0; i < 5; i++) printf("%d\n", b[i]);
	return 0;
}

int main()
{
	// seventh();
	// tenth();
	return 0;
}
