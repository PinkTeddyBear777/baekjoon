#include<stdio.h>

int main(void) {
	int A, B;

	scanf("%d %d", &A, &B);

	if (A >= 1 && B <= 10000) {
		printf("%d\n", A + B);
		printf("%d\n", A - B);
		printf("%d\n", A*B);
		printf("%d\n", A / B);
		printf("%d\n", A%B);
	}
	else {
		printf("입력 조건 충족하지 않음");
	}
}