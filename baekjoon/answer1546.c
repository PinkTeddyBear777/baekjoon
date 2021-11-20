#include<stdio.h>

int main(void) {
	int N;
	int score[1000];
	double M[1000];
	int max = 0;
	double sum = 0;
	double avg;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &score[i]);
	}
	max = score[0];

	for (int i = 0; i < N; i++) {
		if (max < score[i]) {
			max = score[i];
		}
	}
	
	for (int i = 0; i < N; i++) {
		if (score[i] == 0) {
			M[i] = 0;
			continue;
		}
		M[i] = (double)score[i] / max * 100;
		
		sum += M[i];
		
	}
	avg = sum / N;
	
	printf("%lf\n", avg);
	return 0;
}