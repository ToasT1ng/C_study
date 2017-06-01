#include <stdio.h>
#include <stdlib.h>

void saveArr(){
	char s[10];
	// char s2[100];
	scanf("%s", s);
	printf("입력받은 값 : %s\n", s);

	// [^\n] : 공백
	// scanf("%[^\n]s",s2);
	// printf("공백을 포함한 값 : %s\n", s2);

	// 참고
	printf("%d\n", EOF);

}

void savePoint(){
	// char *s;
	// scanf("%s",s); // error!! 포인터형은 읽기전용이기 때문!!
	// printf("입력받은 값 : %s\n", s);

	char *s = malloc(sizeof(char) * 10); // char 10개만큼 동적할당
	scanf("%s", s);
	printf("입력받은 값 : %s\n", s);
	free(s);
}

void multipleArr(){
	char s[10], s2[10];
	scanf("%s %s",s,s2);
	printf("입력받은 값 : %s %s\n", s, s2);
}

void multiplePoint(){
	char *s = malloc(sizeof(char) * 10); 
	char *s2 = malloc(sizeof(char) * 10);

	scanf("%s %s",s,s2);
	printf("입력받은 값 : %s %s\n", s, s2);
	free(s);
	free(s2);
}

int main(){
	// saveArr();
	// savePoint();
	// multipleArr();
	multiplePoint();
	return 0;
}