#include <stdio.h>

void doubleArray(){
	int numArray[3][4] = {
		{11,12,13,14},{10,20,30,40},{15,16,17,18}
	};o
	// int numArray2[3][4] = {11,12,13,14,10,20,30,40,15,16,17,18};
	int numArray3[3][4] = {0,};
	// int numArray4[3][4]; 

	printf("%d\n", numArray[0][0]);
	printf("%d\n", numArray[0][1]);
	printf("%d\n", numArray[0][2]);
	printf("%d\n", numArray[0][3]);
	printf("%d\n", numArray[1][2]);
	printf("%d\n", numArray[2][1]);
	// printf("%d\n", numArray4[2][2]);

}

void doubleSize(){
	int numArray[3][4] = {
		{11,12,13,14},{10,20,30,40},{15,16,17,18}
	};
	int size = sizeof(numArray) / sizeof(int); // 12*4/4
	printf("%d\n",size);

	int col = sizeof(numArray[0]) / sizeof(int); // 4*4(int)/4(int)
	int row = sizeof(numArray) / sizeof(numArray[0]); // 12*4/4*4
	printf("%d %d\n", col,row);
}

void doublePrint(){
	int numArray[3][4] = {{11,12,13,14},{10,20,30,40},{15,16,17,18}};
	int size = sizeof(numArray) / sizeof(int);
	int col = sizeof(numArray[0]) / sizeof(int); // 4*4(int)/4(int) - 해당 줄에 해당하는 element
	int row = sizeof(numArray) / sizeof(numArray[0]); // 12*4/4*4 - 몇번째 줄
	for (int i=0 ; i<row ; i++){
		for (int j=0 ; j<col ; j++){
			printf("%d\n",numArray[i][j] );
		}
		printf("\n");
	}
}

int main(){
	doubleArray();
	// doubleSize();
	// doublePrint();
	return 0;
}