#include <stdio.h>

void for_grammar(){
	int n;
	scanf("%d",&n);
	for (int i=1 ; i<=n ; i++){
		printf("%d\n",i );
	}
}

void for_sum(){
	int n ,sum=0;
	scanf("%d",&n);
	for (int i=1 ; i<=n ; i++){
		sum += i;
	}
	printf("%d\n", sum);
}

void for_fac(){
	int n, fac=1;
	scanf("%d",&n);
	for (int i=1 ; i<=n ; i++){
		fac *= i;
	}
	printf("%d\n", fac);
}

int main(){
	// for_grammar();
	// for_sum();
	for_fac();
}