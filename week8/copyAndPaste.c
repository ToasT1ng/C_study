#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void copy(){
	char origin[10];
	char copy[10];
	scanf("%s",origin);
	strcpy(copy,origin); // 앞 parameter에 뒤 parameter를 복사함
	printf("%s\n", copy);
}

// 실습
void mystrcpy(){
	char origin[10];
	char copy[10];
	scanf("%s",origin);
	for (int i=0 ; origin[i]!='\0' && i<strlen(origin) ; i++){
		copy[i] = origin[i];
	}
	printf("%s\n",copy);
}

void copyWithP(){
	char *origin = malloc(sizeof(char) * 10);
	char *copy = malloc(sizeof(char) * 10);
	scanf("%s",origin);
	strcpy(copy,origin);
	printf("%s\n", copy);
}

void mycopyWithP(){
	char *origin = malloc(sizeof(char) * 10);
	char *copy = malloc(sizeof(char) * 10);
	scanf("%s",origin);
	char *originCopy = copy;
	for ( ; *origin != '\0' ; origin++, copy++){
		*copy = *origin;
	}
	printf("%s\n", originCopy);

	// free(origin);
	// free(copy);
}

// 설명
void paste(){
	char origin[20] = "hello";
	char paste[10];
	scanf("%s",paste);
	strcat(origin,paste); // 앞 parameter 뒤에 뒤 parameter를 붙임
	printf("%s\n", origin);
}


// 실습
void mystrcat(){
	char origin[20] = "hello";
	char paste[10];
	scanf("%s",paste);
	int j = strlen(origin);
	for (int i=0 ; paste[i] != '\0' ; i++,j++){
		origin[j] = paste[i];
	}
	origin[j] = '\0';
	printf("%s\n", origin);
}

void pasteWithP(){
	char *origin = malloc(sizeof(char) *10);
	char *paste = malloc(sizeof(char) *10);
	scanf("%s %s",origin,paste);
	strcat(origin,paste); // 앞 parameter 뒤에 뒤 parameter를 붙임
	printf("%s\n", origin);
}

void mypasteWithP(){
	char *origin = malloc(sizeof(char) *10);
	char *paste = malloc(sizeof(char) *10);
	scanf("%s %s",origin,paste);
	char *originPaste = origin;
	int j = strlen(origin);
	origin += j;
	for ( ; *paste != '\0' ; origin++,paste++){
		*origin = *paste;
	}
	printf("%s\n", originPaste);	
}

int main(){
	// copy();
	// mystrcpy();
	// copyWithP();
	// mycopyWithP();
	// paste();
	// mystrcat();
	// pasteWithP();
	mypasteWithP();
	return 0;
}