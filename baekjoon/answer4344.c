#include<stdio.h>

int main(void){
    int C;
    int N;
    int score[1000]={0};
    int sum=0;
    double avg=0;
	double pass = 0;

    scanf("%d",&C);

    for(int i=0;i<C;i++){
        scanf("%d",&N);
		sum = 0;
		pass = 0;
        for(int j=0;j<N;j++){
            scanf("%d",&score[j]);
            sum+=score[j];
        }
        avg=(double)sum/N;
		for (int k = 0; k < N; k++) {
			if (score[k] > avg) {
				pass++;
			}
		}
		avg = 100*pass / N;
        printf("%0.3lf%%\n",avg);
    }



}