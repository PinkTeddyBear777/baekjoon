#include<stdio.h>

int main(void) {
	int a, b;
	int b1, b2, b3;
	

	scanf("%d", &a);
	scanf("%d", &b);

	b1 = b / 100;
	b2 = (b % 100) / 10;
	b3 = b % 10;

	printf("%d\n", a*b3);
	printf("%d\n", a*b2);
	printf("%d\n", a*b1);
	printf("%d\n", a*b1*100 + a * b2*10 + a * b3);
}