#include <stdio.h>

int star(){ 
	int n;
	scanf("%d",&n);
	for (int i=1 ; i<=n ; i++){
		for (int j=1 ; j<=i ; j++){
			printf("*");
		}
		printf("\n");
	}
}
// *
// **
// ***

int star2(){
	int n;
	scanf("%d",&n);
	for (int i=1 ; i<=n ; i++){
		for (int j=1 ; j<=n-i ; j++){
			printf(" ");
		}
		for (int j=1 ; j<=i ; j++){
			printf("*");
		}
		printf("\n");
	}
}

//   *
//  **
// ***

int star3(){
	int n;
	scanf("%d",&n);
	for (int i=1 ; i<=n ; i++){
		for (int j=1 ; j<=n-i ; j++){
			printf(" ");
		}
		for (int j=1 ; j<=2*i-1 ; j++){
			printf("*");
		}
		printf("\n");
	}
}
//   *
//  ***
// *****

int star4(){
	int n;
	scanf("%d",&n);
	for (int i=1 ; i<=n ; i++){
		// for (int j=n-i ; j>=0 ; j--){
		// 	printf("*");
		// }
		for (int j=0 ; j<= n-i ; j++){
			printf("*");
		}
		printf("\n");
	}
}

// ***
// **
// *

int star5(){
	int n;
	scanf("%d",&n);
	for (int i=1 ; i<=n ; i++){
		for (int j=1 ; j<i  ; j++){
			printf(" ");
		}
		for (int j=1 ; j<2*n-i-1 ; j++){
			printf("*");
		}
		printf("\n");
	}
}

// ***
//  **
//   *

int star6(){
	int n;
	scanf("%d",&n);
	for (int i=1 ; i<=n ; i++){
		for (int j=1 ; j<i  ; j++){
			printf(" ");
		}
		for (int j=0 ; j<2*(n-i)+1 ; j++){
			printf("*");
		}
		printf("\n");
	}
}

// *****
//  ***
//   *

int star7(){
	int n;
	scanf("%d",&n);
	for (int i=1 ; i<=n ; i++){
		for (int j=1 ; j<=n-i ; j++){
			printf(" ");
		}
		for (int j=1 ; j<=2*i-1 ; j++){
			printf("*");
		}
		printf("\n");
	}	
	for (int i=1 ; i<n ; i++){
		for (int j=1 ; j<=i ; j++){
			printf(" ");
		}
		for (int j=0 ; j<2*(n-i)-1 ; j++){
			printf("*");
		}
		printf("\n");
	}
}

//   *
//  ***
// *****
//  ***
//   *

int main(){
	// star();
	// star2();
	// star3();
	// star4();
	// star5();
	// star6();
	star7();
}