#include <stdio.h>

// 1번
void star(){
	int num;
	int i,j;
	scanf("%d",&num);
	for(i=1;i<=2*num-1;i++){ // i:해당하는 줄(line) / j:line의 자리
		if(i<=num){ // 0부터 num-1까지 : num번
			for(j=1;j<=num*2;j++){ // 각 line 을 돌린다 / j:line의 자리
				if(j<=i || j>=(2*num)-i+1) printf("*"); // 2*num - (i-1)
				else printf(" ");
			}
			printf("\n");
		}else{
			for(j=1;j<=num*2;j++){
				if(j<=(2*num)-i || j>=i+1) printf("*"); // 2*num - i
				else printf(" ");
			}
			printf("\n");
		}
	}
}

void star2(){
	int n,j,i;
	scanf("%d",&n);
	for (i=1 ; i<=n ; i++){ // i:해당하는 줄(line) / j:별의갯수, 띄어쓰기갯수
		for (j=1 ; j<=i ; j++) // 별찍기 기본 
			printf("*"); 
		for (j=1 ; j<=2*(n-i) ; j++) // 2*n - 2*i
			printf(" "); 
		for (j=1 ; j<=i ; j++) 
			printf("*");
		printf("\n");
	}
	for (i=1 ; i<=n-1 ; i++){
		for (j=1 ; j<= n-i ; j++) // 뒤집어진 별찍기 기본 : n-i 
			printf("*"); 
		for (j=1 ; j<= 2*i; j++) 
			printf(" ");
		for (j=1 ; j<= n-i ; j++) 
			printf("*");
		printf("\n");
	}
}


// 2번
void int_plus(){
	int a,b;
	scanf("%d %d", &a,&b);
	printf("%d\n", a+b);
}

int int_plus_return(){
	int a,b;
	scanf("%d %d", &a,&b);
	return a+b;
}



void float_plus(){
	int a;
	float b;
	scanf("%d %f", &a,&b);
	printf("%f\n", a+b);
}

float float_plus_return(){
	int a;
	float b;
	scanf("%d %f", &a,&b);
	return a+b;	
}



void int_plus2(){
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	printf("%d\n", a+b+c);
}


// 3번
int factorial(int n){
	if(n >= 2) return n*factorial(n-1);
	else return 1;
}

int main(){
	star();
	// star2();
	// int_plus();
	// float_plus();
	// int_plus2();
	// printf("%d\n", int_plus_return());
	// printf("%f\n", float_plus_return());

	int n;
	scanf("%d",&n);
	printf("%d\n",int factorial(n));
	return 0;
}