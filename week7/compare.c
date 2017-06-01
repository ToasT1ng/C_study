#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void compare(){
	char *first = malloc(sizeof(char) *10);
	char *second = malloc(sizeof(char) *10);
	printf("띄어쓰기로 구분해서 입력하세요 -> ");
	scanf("%s %s", first,second);
	char *originFirst = first;
	char *originSecond = second;

	int ans = 0;
	while(*first != '\0' || *second != '\0'){
		if (*first == *second){
			first++, second++;
		} else {
			ans = *first - *second;
			break;
		}
	}
	printf("구한 답 : %d\n", ans);
	printf("함수를 쓴 답 : %d\n", strcmp(originFirst,originSecond));
}

void compareArr(){
	char first[10];
	char second[10];
	printf("띄어쓰기로 구분해서 입력하세요 -> ");
	scanf("%s %s", first,second);

	int ans = 0;
	for (int i=0 ; first[i] != '\0' || second[i] != '\0' ; i++){
		if (first[i] != second[i]){
			ans = first[i] - second[i];
			break;
		}
	}
	printf("구한 답 : %d\n", ans);
	printf("함수를 쓴 답 : %d\n", strcmp(first,second));
}

int main(){
	// compare();
	compareArr();
	return 0;
}