#include <stdio.h>
// #include <string.h>

void while_grammar(){
	int n, i = 1 ;
	scanf("%d",&n);
	while (n > 0){
		printf("%d\n",i );
		i++, n--;
	}
}

void while_sum(){
	int n, i = 1 ,sum = 0;
	scanf("%d",&n);
	while (n > 0){
		sum += i;
		i++, n--;
	}	
	printf("%d\n",sum );
}

void while_fac(){
	int n, i = 1 ,fac = 1;
	scanf("%d",&n);
	while (n > 0){
		fac *= i;
		i++, n--;
	}	 
	printf("%d\n",fac );
}

int main(){
	// while_grammar();
	// while_sum();
	while_fac();
}