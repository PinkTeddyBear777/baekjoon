#include<stdio.h>

int main(void) {
	int H, M;
	scanf("%d %d", &H, &M);

	if (H >= 0 && H <= 23 && M >= 0 && M <= 59) {
		if (M < 45) {
			M += 60;
			H -= 1;
			if (H < 0) {
				H = 23;
			}
		}
		M -= 45;

		printf("%d %d", H, M);
	}
	else {
		printf("입력 조건 미달성");
	}
	return 0;
}