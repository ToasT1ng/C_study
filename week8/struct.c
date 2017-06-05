#include <stdio.h>
#include <string.h>

void str(){
	struct student{
		int num;
		char name[10];
		char address[10];
	};

	struct student jina;
	jina.num = 2016003609;
	// jina.name = "jina";
	strcpy(jina.name,"jina");
	
	printf("%s\n", jina.name);
	printf("%d\n", jina.num);
}

void str2(){
	struct student{
		int num;
		char name[10];
		char address[10];
	} jina;

	jina.num = 2016003609;
	// jina.name = "jina";
	strcpy(jina.name,"jina");
	
	printf("%s\n", jina.name);
	printf("%d\n", jina.num);
}

void str3(){
	struct student{
		int num;
		char name[10];
		char address[10];
	};

	struct student jina = {.name = "jina", .num = 2016003609};
	
	printf("%s\n", jina.name);
	printf("%d\n", jina.num);
}

void defstr(){
	typedef struct id{
		int num;
		char name[10];
		char address[10];
	} student_id;

	student_id jina;
	jina.num = 2016003609;
	printf("%d\n", jina.num);
}

int main(){
	// str();
	// str2();
	// str3();
	defstr();
	return 0;
}