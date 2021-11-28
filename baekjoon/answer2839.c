#include<stdio.h>

int main(void) {
	int N;
	int result = 0;
	int flag = 0;
	scanf("%d", &N);
	
	
	result = N;
	while (result>=0) {
		if (result % 5 == 0) {
			printf("%d", (result/5)+flag);
			return 0;
		}
		result = result - 3;
		flag++;
		
	}
	printf("-1");
	
	
	return 0;
}