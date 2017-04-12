#include <stdio.h>

void first(){
	int input;
	printf("입력하세요 : ");
	scanf("%d",&input);
	printf("%d\n", input);
}

void plus(){
	int a,b; // 4byte 32bit
	float c,d; // 4byte 32bit
	double e,f; // 8byte 64bit
	unsigned int g,h;
	const int con1 = 1;
	printf("입력하세요 : ");
	// scanf("%d %d",&a,&b);
	scanf("%f %f",&c,&d);
	// scanf("%lf %lf",&e,&f);
	// scanf("%u %u",&g,&h);
	// printf("A + B = %d\n", a+b);
	printf("A + B = %f\n", c+d);
	printf("A + B = %e\n", c+d);
	// printf("A + B = %lf\n", e+f);
	// printf("A + B = %u\n", g+h);
	

	// double decimal = 2.1e+2;
	// int decimal2 = 2.1e+2;
	// int decimal3 = 2.1e-1;
	// printf("%lf\n", decimal );
	// printf("%d\n", decimal2 );
	// printf("%d\n", decimal3 );
}

void size(){
	int a;
	char b;
	int size1 = sizeof(a);
	int size2 = sizeof(b);
	printf("%d %ld\n",size1, sizeof(int));
	printf("%d %ld\n",size2, sizeof(char));
}

void character(){
	char some = 'h'; // 1byte 8bit
	printf("%s %c %d\n",&some,some,some );
	char some2 = 0;
	printf("%s %c %d\n",&some2,some2,some2 );
	printf("%c %d\n",'a'+1,'a'+1 );
	char some3[2] = "hi";
	// printf("%s %c %d\n",&some3,some3,some3 );
	printf("%s\n",some3 );
	// printf("%c\n",some3 );  // can't do it
	// printf("%d\n",&some3 );
}

int main(){
	printf("hello\n");
	first();
	// plus();
	// size();
	// character();
}