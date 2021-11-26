#include<stdio.h>
#include<stdbool.h>

int main(void) {
	int M, N;
	bool flag[1000000] = { false };
	flag[0] = true;
	scanf("%d %d", &M, &N);

	for (int i = 2; i < N + 1; i++) {
		for (int j = i + i; j <= N; j+=i) {
			flag[j - 1] = true;
		}
	}

	for (int i = M; i <= N; i++) {
		if (flag[i - 1] == false) {
			printf("%d\n", i);
		}
	}

	return 0;
}