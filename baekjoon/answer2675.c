#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* myStrCat(char* str1, char* str2) {
	size_t len_str1;
	char* result = NULL;

	if (str1 && str2) {
		result = malloc((len_str1 = strlen(str1)) + strlen(str2) + 1);
		if (result) {
			strcpy(result, str1);
			strcpy(result + len_str1, str2);
		}

	}
	return result;
}


int main(void) {
	char** S;
	int T, R;
	char* P = NULL;
	int length = 0;

	char temp;


	scanf("%d", &T);
	S = (char**)malloc((sizeof(char*)*1000));
	
	for (int i = 0; i < T; i++) {
		scanf("%d", &R);
		S[i] = (char*)malloc((sizeof(char) * 20));
		scanf("%s", S[i]);
		

		printf("입력 문자열: %s\n", S[i]);

		length = strlen(S[i]);

		P = (char*)malloc(sizeof(char) * 200);
		
		strcpy(P, "");
		printf("P: %s \n", P);

		for (int j = 0; j < length; j++) {
			strcpy(&temp, "");//temp초기화
			temp = S[i][j];
			
			printf("temp: %c\n", temp);
			P = myStrCat(P, &temp);
			printf("결과: %s\n", P);
		}

		printf("%s\n", P);
		free(S[i]);
	}
	free(S);
	free(P);

	return 0;
}