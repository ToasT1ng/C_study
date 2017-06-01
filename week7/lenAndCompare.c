#include <stdio.h>
#include <string.h>

void len(){
	char *s1 = "hello";
	char s2[10] = "hello";

	printf("포인터 : %d\n",strlen(s1));
	printf("배열 : %d\n",strlen(s2)); // sizeof랑 차이?
}

void compare(){
	// ASCII 살짝 설명!
	char *s1 = "hi";
	char s2[10] = "hello";
	// char s3[10] = "hello";

	int cp = strcmp(s1,s2); // 'i'=73 / 'e'=69
	printf("%d\n", cp);
}

int main(){
	// len();
	compare();
	return 0;	
}
