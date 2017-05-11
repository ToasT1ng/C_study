#include <stdio.h>

void pointer(){
	int *numPt;
	int num = 9;
	numPt = &num;
	// numPt = num; //error
	printf("%p\n", numPt);
	printf("%p\n", &num);


	// 역참조
	printf("%d\n", *numPt);
	*numPt = 20;
	printf("%d\n", *numPt);
	printf("%d\n", num);
}

int main(){
	pointer();
	return 0;
}