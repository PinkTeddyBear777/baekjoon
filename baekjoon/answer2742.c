#include<stdio.h>

int main(void) {
	int N;
	scanf("%d", &N);

	for (int i = N; N > 0; i--) {
		printf("%d\n", i);
	}
	return 0;
}