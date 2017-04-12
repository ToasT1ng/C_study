#include <stdio.h>

void cond(){
	int a = 1, b = 2;
	if (a==1 && b!=2){
		printf("만족합니다.\n");
	} else {
		printf("만족하지 않습니다.\n");
	}	
}

void cond1(){
	int a = 1;
	// if (a == 1){
	// 	printf("A는 1이다!\n");
	// } else {
	// 	printf("A는 1 아니다!\n");
	// }
	printf("%s\n", a==1 ? "A는 1이다!" : "A는 1 아니다!");
}

void cond2(){
	int a = 1, b = 2;
	if (a==1){
		printf("A가 만족합니다.\n");
	} else if (b==2){
		printf("B가 만족합니다.\n");
	} else{
		printf("만족하지 않습니다.\n");
	}	
}

void cond3(){
	int a = 1, b = 2;
	if (a==1){
		printf("A가 만족합니다.\n");
	} 
	if (b==2){
		printf("B가 만족합니다.\n");
	} else{
		printf("만족하지 않습니다.\n");
	}	
}

void cond4(){
	int a = 1, b = 2;
	if (a==1)
		printf("A가 만족합니다.\n");
		// printf("만족합니다.\n");
	if (b==2)
		printf("B가 만족합니다.\n");
	else
		printf("만족하지 않습니다.\n");
}

void cond5(){
	int a = 1, b = 2;
	a = a==1 ? 3 : 1;
	printf("%s\n", a==3 ? "right" : "wrong");
}

void final(){
	int a, b;
	scanf("%d %d",&a,&b);
	if (a >= b){
		printf("%d\n", a);
	} else {
		printf("%d\n", b);
	}
}

void final2(){
	int n;
	scanf("%d",&n);
	printf("%s\n", n>3 ? "큽니다." : "크지않습니다.");
}

void defin();

int main(){
	printf("hello\n");
	// cond();
	// cond1();
	// cond2();
	// cond3();
	// cond4();
	// cond5();
	// final();
	// final2();
	defin();
}

void defin(){
	printf("hi\n");
}