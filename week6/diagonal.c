#include <stdio.h>

void diagonal(){
	int numArray[3][3] = {
		{1,2,3},
		{11,22,33},
		{10,20,30}
	};
	int size = sizeof(numArray) / sizeof(numArray[0]);
	// 대각
	for (int i=0 ; i<size ; i++){
		printf("%d\n",numArray[i][i]);
	}

	// 역대각
	for (int i=0 ; i<size ; i++){
		printf("%d\n",numArray[i][size-i-1]);	
	}
}

int main(){
	diagonal();
	return 0;
}