#include <stdio.h>

void convert(){
	int num;
	int size = 0;
	int bin[20] = {0,};
	scanf("%d",&num);
	// num 이 0이 될 때까지 num/2 
	// num%2 값을 배열의 앞으로 저장해, 역순 프린트
	for ( ; num>0 ; num/=2,size++){
		bin[size] = num%2;
	}
	for ( ; size>0 ; size--){
		printf("%d", bin[size-1]);
	}
	printf("\n");
}


int main(){
	convert();
	return 0;
}