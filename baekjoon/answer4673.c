#include<stdio.h>

int d(int n) {
	int r1000=0, r100=0, r10=0, r=0;
	int temp;
	int ten = 1000;
	int original = n;
	int result;
	
	while (1) {
		temp = n % ten;
		if (temp != n) {
			switch (ten)
			{
			case 1000:
				r1000 = n / 1000;
				n -= r1000 * 1000;
				r100 = n / 100;
				n -= r100 * 100;
				r10 = n / 10;
				n -= r10 * 10;
				r = n % 10;
				break;
			case 100:
				r100 = n / 100;
				n -= r100 * 100;
				r10 = n / 10;
				n -= r10 * 10;
				r = n % 10;
				break;
			case 10:
				r10 = n / 10;
				n -= r10 * 10;
				r = n % 10;
				break;
			case 1:
				r = n % 10;
				break;
			default:
				printf("자리수 초기화 실패\n");
				break;
			}
			break;
		}
		else {
			ten = ten / 10;
		}
	}
	result = original + r1000 + r100 + r10 + r;
	return result;
}

int main(void) {
	int flag[10000] = { 0 };
	int output;

	for (int i = 1; i < 10000; i++) {
		output = d(i);
		if (output < 10000) {
			flag[output] = 1;
		}
		
	}

	for (int i = 1; i < 10000; i++) {
		if (flag[i] == 1)continue;
		printf("%d\n", i);
	}
	return 0;
}