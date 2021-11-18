
#include<stdio.h>

int main(void) {
	int n[10];
	int r[10];
	int count[42] = { 0 };
	int result = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &n[i]);
		r[i] = n[i] % 42;
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <= 41; j++) {
			if (r[i] == j) {
				count[j]++;
			}
		}
	}
	for (int i = 0; i <= 41; i++) {
		if (count[i] != 0) {
			result++;
		}
	}

	
	printf("%d", result);
	return 0;
}