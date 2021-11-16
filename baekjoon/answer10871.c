#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int N, X;
	scanf("%d %d", &N, &X);

	int A[10000];
	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	

	for (int i = 0; i < N; i++) {
		if (X > A[i]) {
			printf("%d ", A[i]);
		}
	}
	
	return 0;

}