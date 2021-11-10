#include<stdio.h>

int main(void) {
	int A, B;
	scanf("%d %d", &A, &B);

	if (A > 0 && B < 10) {
		printf("%d", A - B);
	}
	else {
		printf("숫자 범위 오버");
	}
}