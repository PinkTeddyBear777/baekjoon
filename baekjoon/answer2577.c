#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


int main(void) {
	int A, B, C;
	int count[10] = { 0 };
	int N;
	int R[9] = { -1,-1,-1,-1,-1,-1,-1,-1,-1 };
	int a = 1000000000;
	int temp;
	int cnt = 0;

	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);

	N = A * B*C;
	
	while (1) {
		if (a<1) {
			break;
		}
		printf("N :%d\n", N);
		temp = N % a;
		
		if (temp != N) {
			temp = N / a;
			R[cnt] = temp;
			N = N % a;
			printf("들어간 값 :%d\n", R[cnt]);
			cnt++;
		}
		else {
			if (R[0] != -1) {
				R[cnt] = 0;
				printf("들어간 값 :%d\n", R[cnt]);
				cnt++;
			}
		}
		a = a / 10;
		
	}
	
	for (int i = 0; i < 9; i++) {
		printf("자리수 :%d\n", R[i]);
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			if (R[j] == i) {
				count[i]++;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		printf("카운트%d\n",count[i]);
	}

	return 0;
}