#include <stdio.h>

void pointer(){
	int *numPt;
	int num = 9;
	numPt = &num;
	// numPt = num; //error
	printf("%p\n", numPt);
	printf("%p\n", &num);
	// printf("%d\n", numPt); //warning


	// 역참조
	printf("%d\n", *numPt);
	*numPt = 20;
	printf("%d\n", *numPt);
	printf("%d\n", num);

}

void form(){
	float *numPt;
	float num = 1.2f;

	numPt = &num;

	printf("%f\n", *numPt);


	char *charPt;
	char ch = 'a';

	charPt = &ch;

	printf("%c\n", *charPt);
}

void voidForm(){
	int num = 10;
	int *numPt = &num;
	char ch = 'a';
	char *charPt = &ch;

	void *pt;

	// charPt = numPt;
	// numPt = charPt;  // warning

	pt = charPt;
	// printf("%c\n", *pt); // error

	pt = numPt;
	// printf("%d\n", *pt); // error

	// charPt = pt;
	// numPt = pt;

	// void num; // error
}

void doublePointer(){
	int *pt;
	int **doublePt;
	int num = 11;

	pt = &num;
	doublePt = &pt;

	printf("%d\n", *pt);
	printf("%d\n", **doublePt);
}

void wrong(){
	int *numPt = 0x100;

	printf("%d\n", *numPt);

	// wrong!
}

int main(){
	// pointer();
	// form();
	// voidForm();
	// doublePointer();
	wrong();
	return 0;
}