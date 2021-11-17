#include<stdio.h>

int main(void) {
	int N;
	int A[1000000];
	int min, max;
	scanf("%d", &N);

	if (N >= 1) {
		for (int i = 0; i < N; i++) {
			scanf("%d", &A[i]);
		}
		min = A[0];
		max = A[0];

		for (int i = 0; i < N; i++) {
			if (min > A[i]) {
				min = A[i];
			}
			if (max < A[i]) {
				max = A[i];
			}
		}
		printf("%d %d", min, max);
	}
	return 0;
}