#include<stdio.h>
#include<math.h>

int main(void) {
	int V, A, B;
	double goal = 0;
	scanf("%d %d %d", &A, &B, &V);

	goal = ceil((double)(V - A) / (A - B));
	printf("%0.0lf\n", goal + 1);

	return 0;
}