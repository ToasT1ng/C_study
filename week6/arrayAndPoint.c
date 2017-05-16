#include <stdio.h>

void arrayToPointer(){
	int num[] = {11,12,13,14};
	int *arrayPt;

	arrayPt = num;

	printf("%d\n", *arrayPt);
	printf("%d\n", *num);

	// printf("%d\n", ++(*arrayPt));
	printf("%d\n", arrayPt[3]);

	printf("%d\n", sizeof(num));
	printf("%d\n", sizeof(arrayPt)); // 32bit -> 4byte
}

void convert2(){
	int num;
	int size = 0;
	int bin[20] = {0,};
	scanf("%d",&num);
	// num 이 0이 될 때까지 num/2 
	// num%2 값을 배열의 앞으로 저장해, 역순 프린트
	int *arrayPt = bin;

	for ( ; num>0 ; num/=2,size++){
		*arrayPt++ = num%2;
	}
	*arrayPt--;
	for ( ; size>0 ; size--){
		// printf("%d", bin[size-1]);
		printf("%d", *arrayPt--);
	}
	printf("\n");
}

int main(){
	// arrayToPointer();
	convert2();
}