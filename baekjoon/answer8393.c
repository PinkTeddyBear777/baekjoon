#include<stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	if (n >= 1 && n <= 10000) {
		int sum = 0;
		for (int i = 1; i <= n; i++) {
			sum += i;
		}
		printf("%d\n", sum);
	}
	else {
		printf("입력조건 오류");
	}
	return 0;
}