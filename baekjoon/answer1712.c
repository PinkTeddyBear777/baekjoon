#include<stdio.h>
#include<math.h>

int main(void) {
	unsigned int A, B, C;
	
	scanf("%u %u %u", &A, &B, &C);
	unsigned int cost = C-B;

	if (B >= C) {
		printf("-1\n");
	}
	else {
		printf("%u\n", A / cost + 1);
	}
	
	return 0;
}