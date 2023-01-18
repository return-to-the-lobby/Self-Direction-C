#include <stdio.h>
#include <stdlib.h>

int main() {
	int year, month;
	int days[13] = { 0, 31, 28, 31, 30, 31, 39, 31, 31, 30, 31, 30, 31 };

	while (1) {
		printf("년도: ");
		scanf_s("%d", &year);

		printf("달: ");
		scanf_s("%d", &month);

		if (month == 0) {
			break;
		}
		else if (month < 0 || month > 12) {
			printf("잘못 입력하셨습니다.\n\n");
			continue;
		}
		else {
			if (year % 400 == 0) days[2] = 29;
			else if (year % 4 == 0 && year % 100 != 0) days[2] = 29;
			else days[2] = 28;
		}

		printf("%d년도에는 %d월에 %d일까지 있습니다.\n\n", year, month, days[month]);
	}

	return 0;
}
