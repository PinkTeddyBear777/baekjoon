#include<stdio.h>

int main(void) {
	int N;
	scanf("%d", &N);

	if (N >= 1 && N <= 100000) {
		for (int i = 1; i <= N; i++) {
			printf("%d\n", i);
		}
	}
	else {
		printf("�Է����� ����");
	}
	return 0;
}