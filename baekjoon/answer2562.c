#include<stdio.h>

int main(void) {
	int n[9];
	int flag;
	int max;

	scanf("%d %d %d %d %d %d %d %d %d", &n[0], &n[1], &n[2], &n[3], &n[4], &n[5], &n[6], &n[7], &n[8]);
	max = n[0];
	flag = 1;
	for (int i = 1; i <= 9; i++) {
		if (max < n[i-1]) {
			max = n[i-1];
			flag = i;
		}
	}
	
	printf("%d\n", max);
	printf("%d", flag);

	return 0;
}