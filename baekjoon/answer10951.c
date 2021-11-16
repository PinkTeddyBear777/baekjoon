#include<stdio.h>

int main(void) {
	int A, B;
	int checking;

	while (1) {
		checking=scanf("%d %d", &A, &B);
		if (checking == EOF) {
			break;
		}
		printf("%d\n", A + B);
	}
}