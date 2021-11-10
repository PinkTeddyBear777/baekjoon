#include<stdio.h>

int main(void) {
	int A, B;
	scanf("%d %d", &A, &B);

	if (A > 0 && B < 10) {
		printf("%d", A*B);
	}
	else {
		printf("변수가 조건에 맞지 않음");
	}

}