#include<stdio.h>

int main(void) {
	int A, B;
	
	scanf("%d %d", &A, &B);

	if (A > 0 && B < 10) {
	
		printf("%0.9lf", (double)A/B);
	}
	else {
		printf("입력 범위 오류");
	}
}