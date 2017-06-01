#include <stdio.h>

void stringAndPoint(){
	char c = 'a';
	printf("%c\n", c);

	// char s = "hello";
	// printf("%s\n", s); // error and warning : why? 1bit만 저장가능하기 때문

	char *s = "hello"; // hello 라는 문자열을 가르킨다
	printf("%s\n", s);
}

void accessPoint(){
	char *s = "hello";
	printf("%c\n", s[0]);
	printf("%c\n", s[2]);
	printf("%c\n", s[5]); // null

	// s[2] = 'A';
	// printf("%c\n", s[2]); // error!! why? 읽기전용이기 때문! 포인터형 문자열은 수정불가하다~
}

void stringAndArr(){
	char s[10] = "hello";
	printf("%s\n", s);

	// char s2[10];
	// s2 = "hello"; // wrong! 이미 선언된 것에 할당불가!

	// s2[0] = 'A'; // <- 이런식으로 할당하는 수 밖에 없다
}

void accessArr(){
	char s[10] = "hello";
	printf("%c\n", s[0]);
	printf("%c\n", s[2]);
	printf("%c\n", s[5]);

	s[0] = 'H'; // 주의 "" 가 아니라 '' 이다!
	printf("%s\n", s);
}

int main(){
	// stringAndPoint();
	// accessPoint();
	// stringAndArr();
	accessArr();
	return 0;
}