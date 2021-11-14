#include<stdio.h>

int main(void) {
	int N;
	scanf("%d", &N);

	if (N >= 1 && N <= 9) {
		for (int i = 1; i < 10; i++) {
			printf("%d * %d = %d\n", N, i, N*i);
		}
	}
	else {
		printf("입력범위 오류");
	}
	return 0;
}