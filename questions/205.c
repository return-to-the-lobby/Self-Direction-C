#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	int students[3][4] = {
		{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0} // Prevents C6001
	};

	for (int student = 0; student < 3; student++) {
		int result = 0;
		printf("학생 %d의 점수: ", student + 1);
		for (int subject = 0; subject < 3; subject++) {
			scanf("%d", &students[student][subject]);
			result += students[student][subject];
		}
		students[student][3] = result;
		result = 0;
	}
	printf("%13s %10s %10s %10s\n", "국어", "영어", "수학", "총점");


	for (int student = 0; student < 3; student++) {
		printf("%d번", student + 1);
		for (int subject = 0; subject < 4; subject++) {
			printf("%10d", students[student][subject]);
		}
		printf("\n");
	}
	printf("합계");

	for (int subject = 0; subject < 4; subject++) {
		int result = 0;
		for (int student = 0; student < 3; student++) {
			result += students[student][subject];
		}
		printf("%10d", result);
	}	

	return 0;
}
