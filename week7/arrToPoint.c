#include <stdio.h>

void doubleArrToPoint(){
	int arr[2][4] = {
		{1,2,3,4},
		{11,22,33,44}
	};

	int (*arrP)[4] = arr;
	// int **arrP2 = arr; 
	// int *arrP3 = arr; // warning!!

	// int **arrP2 = (int **)arr; 
	// int *arrP3 = (int *)arr; // right!!

	int num = sizeof(arrP);
	int num2 = sizeof(arr);
	printf("%d %d\n", num, num2);

	int col = sizeof(arr[0]) / sizeof(int); // 4*4(int)/4(int) - 해당 줄에 해당하는 element
	int row = sizeof(arr) / sizeof(arr[0]); // 12*4/4*4 - 몇번째 줄
	for (int i=0 ; i<row ; i++){
		for (int j=0 ; j<col ; j++){
			printf("%2d ",arrP[i][j] );
		}
		printf("\n");
	}
}

void printPoint(){
	int arr[3][4] = {
		{1,2,3,4},
		{11,22,33,44},
		{10,20,30,40}
	};
	
	int *arrP3 = (int *)arr;
	printf("%d\n", *(arrP3+2));

	int size = sizeof(arr) / sizeof(int);
	// for (int i=0 ; i<size ; i++){
	// 	printf("%d\n", *(arrP3+i));
	// }
	int j=0;
	for (int i=0 ; i<size ; i++, arrP3++,j++){
		printf("%d ", *arrP3);
		if (j==3){
			j=0;
			printf("\n");
		}
	}
}

void triple(){
	// 높이 / 세로 / 가로
	int arr[2][3][4] = {
		{
			{1,2,3,4},
			{11,22,33,44},
			{10,20,30,40}
		},
		{
			{5,6,7,8},
			{55,66,77,88},
			{50,60,70,80}
		}
	};

	int (*arrPoint)[3][4] = arr;
	printf("%d\n", arrPoint[0][0][0]);
}

int main(){
	// doubleArrToPoint();
	// printPoint();
	triple();
	return 0;
}