#include <stdio.h>

void star(){
	int i,j,n;
	// scanf("%d\n",&n);
	i = 5;
	j = 5;
	n = 5;
	for ( ; i>0 ; i--){
		for (j=5 ; j>=i ; j--){
			printf("*");
		}
		printf("\n");
	}
}

int main(){
	star();
	return 0;
}