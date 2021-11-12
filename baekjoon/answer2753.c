#include<stdio.h>

int main(void) {
	int year;
	scanf("%d", &year);

	if (year >= 1 && year <= 4000) {
		if (((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0) {
			printf("1");
		}
		else {
			printf("0");
		}
	}
	else {
		printf("입력범위를 벗어남");
	}
	return 0;
}