#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<Windows.h>

int main(void) {
	int N;
	int count = 0;
	int num10, num1;
	int next = 0;
	int N_copy = -1;

	scanf("%d", &N);
	if (N >= 0 && N <= 99) {
		while (1) {
		if (N == N_copy) {
			printf("%d", count);
			break;
		}
		if (count == 0) {
			N_copy = N;
		}
		num10 = (int)(N_copy / 10);
		num1 = N_copy % 10;
		
		printf("%d %d\n", num10, num1);
		next = num10 + num1;
		N_copy = num1 * 10 + (next % 10);
		count++;
		printf("%d\n", N_copy);
		Sleep(1000);
		}
	}
	
	return 0;
}