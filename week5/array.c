#include <stdio.h>

void arrayTest(){
	int numArray[4] = {4,7,9,10};
	// int numArray2[] = {3,4,9};	
	// int numArray2[];	// error
	
	printf("%d\n", numArray[0]);
	printf("%d\n", numArray[1]);
	printf("%d\n", numArray[2]);
	printf("%d\n", numArray[3]);
	// printf("%d\n", numArray[100]); // overflow

	int numArray3[10] = {0, }; // 주의 : 크기 지정 해야만함

	printf("%d\n", numArray3[0]);
	printf("%d\n", numArray3[1]);
	printf("%d\n", numArray3[2]);

	char letterArray[3] = {'a','b','c'};
	// char letterArray2[3] = {"a","b","c"}; // error
	char letterArray3[3] = {'a',};

	printf("%c\n", letterArray[1]);
	// printf("%c\n", letterArray2[1]);
	printf("%c\n", letterArray3[0]);
	printf("%c\n", letterArray3[2]);
}

void arraySize(){
	int numArray[4] = {11,22,33,44};
	printf("%lu\n",sizeof(numArray));
	printf("%lu\n",sizeof(numArray)/sizeof(int));
}

void arrayChange(){
	int numArray[] = {10,20,30,40,50};
	printf("%d\n", numArray[0]);
	printf("%d\n", numArray[2]);
	
	numArray[0] = 3;
	numArray[2] = 7;
	
	printf("%d\n", numArray[0]);
	printf("%d\n", numArray[2]);
}

void arrayPrint(){
	int numArray[] = {11,12,15,10,5,7,8};
	int size = sizeof(numArray)/sizeof(int);
	for (int i=0 ; i<size ; i++){ // i<=size-1
		printf("%d\n", numArray[i]);
	}
}

void arraySum(){
	int numArray[] = {1,5,4,10};
	int size = sizeof(numArray)/sizeof(int);
	int sum = 0;
	for (int i=0 ; i<size ; i++){ // i<=size-1
		sum += numArray[i];
	}
	printf("%d\n",sum);
}

void arrayDouble(){
	int numArray[] = {1,5,4,10};
	int size = sizeof(numArray)/sizeof(int);
	int sum = 0;
	for (int i=0 ; i<size ; i++){ // i<=size-1
		numArray[i] *= 2;
	}
	for (int i=0 ; i<size ; i++){ // i<=size-1
		printf("%d\n",numArray[i]);
	}
	
}

int main(){
	arrayTest();
	// arraySize();
	// arrayChange();
	// arrayPrint();
	// arraySum();
	// arrayDouble();
	return 0;
}