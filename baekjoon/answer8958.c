#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void) {
	
	int _count = 0;
	int score = 0;
	int N = 1;
	int j_var;

	scanf("%d", &N);
	char** OX = (char**)malloc(sizeof(char*) * N);
	for (int i = 0; i < N; i++) {
		OX[i] = (char*)malloc(sizeof(char) * 80);
		scanf("%s", OX[i]);
		j_var = strlen(OX[i]);

		for (int j = 0; j < j_var; j++) {
			
			if (OX[i][j] == 'X') {
				//count �� �ʱ�ȭ
				_count = 0;
			}
			else if (OX[i][j]== 'O') {
				//ó�� ���� ī��Ʈ�� 0���״� 1������ ���ϱ�
				score += ++_count;
			}
		}

		printf("%d\n", score);
		score = 0;
		_count = 0;
		j_var = 0;
		
	}
	free(OX);
	


	return 0;
}