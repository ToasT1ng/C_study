#include <stdio.h>

void solve1(){
	int a;
	float b;
	char c;
	scanf("%d %f %c", &a,&b,&c);
	printf("%d %f %c\n", a,b,c );
}

void solve2(){
	int a;
	char b;
	int size1 = sizeof(a);
	int size2 = sizeof(b);
	printf("%d %ld\n",size1, sizeof(int));
	printf("%d %ld\n",size2, sizeof(char));
}

void solve3(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n", a+b);
	printf("%d\n", a-b);
	printf("%d\n", a*b);
	printf("%d\n", a/b);
	printf("%d\n", a%b);
}

void solve4(){
	int month,day,i, sum=0, week;   
	// month : 입력받은 달 / day : 입력받은 날  / sum : 모든 날짜들의 합 / week : 요일
	
	// char *day2[] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
	// char day2[8][4] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
	
	scanf("%d %d",&month,&day);
	for (i=1 ; i<month ; i++){
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
			sum += 31;
		} else if(i == 4 || i == 6 || i == 9 || i == 11){
			sum += 30;
		} else if(i == 2){
			sum += 28;
		} 
	}
	sum += day;
	week = sum % 7 ;
	// printf("%s\n", day2[week]);

	if (week == 0){
		printf("%s\n", "SUN");
	} else if (week == 1){
		printf("%s\n", "MON" );
	} else if (week == 2){
		printf("%s\n", "TUE" );
	} else if (week == 3){
		printf("%s\n", "WED" );
	} else if (week == 4){
		printf("%s\n", "THU" );
	} else if (week == 5){
		printf("%s\n", "FRI" );
	} else {
		printf("%s\n", "SAT" );
	}
}

void solve5_a(){
	int num;
	int i,j;
	scanf("%d",&num);
	for(i=1;i<=2*num-1;i++){ // i:해당하는 줄(line) / j:line의 자리
		if(i<=num){ // 0부터 num-1까지 : num번
			for(j=1;j<=num*2;j++){ // 각 line 을 돌린다
				if(j<=i || j>=(2*num)-i+1) printf("*"); // 2*num - (i-1)
				else printf(" ");
			}
			printf("\n");
		}else{
			for(j=1;j<=num*2;j++){
				if(j<=(2*num)-i || j>=i+1) printf("*"); // 2*num - i
				else printf(" ");
			}
			printf("\n");
		}
	}
}

void solve5_b(){
	int n,j,i;
	scanf("%d",&n);
	for (i=1 ; i<=n ; i++){ // i:해당하는 줄(line) / j:별의갯수, 띄어쓰기갯수
		for (j=1 ; j<=i ; j++) // 별찍기 기본 
			printf("*"); 
		for (j=1 ; j<=2*(n-i) ; j++) // 2*n - 2*i
			printf(" "); 
		for (j=1 ; j<=i ; j++) 
			printf("*");
		printf("\n");
	}
	for (i=1 ; i<=n-1 ; i++){
		for (j=1 ; j<= n-i ; j++) // 뒤집어진 별찍기 기본 : n-i 
			printf("*"); 
		for (j=1 ; j<= 2*i; j++) 
			printf(" ");
		for (j=1 ; j<= n-i ; j++) 
			printf("*");
		printf("\n");
	}
}

void solve6(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (a >= b){
		if (b >= c){
			printf("%d\n",b);
		} else {
			if(a >= c) printf("%d\n",c);
			else printf("%d\n",a);
		}
	} else {
		if (a >= c){
			printf("%d\n",a);
		} else {
			if (b >= c) printf("%d\n",c);
			else printf("%d\n",b);
		}
	}
}


int main(){
	// solve1();
	// solve2();
	// solve3();
	// solve4();
	// solve5_a();
	// solve5_b();
	solve6();
}
