#include <stdio.h>

void logic_and(){
	printf("%d\n", 1 && 1 );
	printf("%d\n", 0 && 1 );
	printf("%d\n", 1 && 0 );
	printf("%d\n", 0 && 0 );
}

void logic_or(){
	printf("%d\n", 1 || 1 );
	printf("%d\n", 0 || 1 );
	printf("%d\n", 1 || 0 );
	printf("%d\n", 0 || 0 );
}

void logic_not(){
	printf("%d\n", !0);
	printf("%d\n", !1);
}

int main(){
	printf("hello\n");
	logic_and();
	logic_or();
	logic_not();
}