#include <stdio.h>

void star(){
	int num;
	int i,j;
	scanf("%d",&num);
	for(i=0;i<2*num-1;i++){
		if(i<=num-1){
			for(j=0;j<num*2;j++){
				if(j<=i || j>=(2*num-1)-i) printf("*");
				else printf(" ");
			}
			printf("\n");
		}else{
			for(j=0;j<num*2;j++){
				if(j<=(2*num-1)-i-1 || j>=i+1) printf("*");
				else printf(" ");
			}
			printf("\n");
		}
	}
}

void star2(){
	int n;
	scanf("%d",&n);
	for (int i=0 ; i<n ; i++){
		for (int j=0 ; j<=i ; j++)
			printf("*");
		for (int j=0 ; j<2*(n-i-1) ; j++)
			printf(" ");
		for (int j=0 ; j<=i ; j++)
			printf("*");
		printf("\n");
	}
	for (int i=0 ; i<n-1 ; i++){
		for (int j=0 ; j< n-i-1 ; j++)
			printf("*");
		for (int j=0 ; j< 2*(i+1); j++)
			printf(" ");
		for (int j=0 ; j< n-i-1 ; j++)
			printf("*");
		printf("\n");
	}
}

void int_plus(){
	int a,b;
	scanf("%d %d", &a,&b);
	printf("%d\n", a+b);
}

void float_plus(){
	int a;
	float b;
	scanf("%d %f", &a,&b);
	printf("%f\n", a+b);
}

void int_plus2(){
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	printf("%d\n", a+b+c);
}

int factorial(int n){
	if(n >= 2) return n*factorial(n-1);
	else return 1;
}


int main(){
	// star();
	// star2();
	// int_plus();
	// float_plus();
	// int_plus2();

	int n;
	scanf("%d",&n);
	printf("%d\n",factorial(n));
}