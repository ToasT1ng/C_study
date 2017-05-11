#include <stdio.h>

void smallest(){
	int numArray[] = {7,5,3,2,10,5,6,9};
	int size = sizeof(numArray)/sizeof(int);
	int ans;
	for (int i=0 ; i<size-1 ; i++){
		if (i == 0){
			ans = numArray[i];
		}
		if (numArray[i] < ans){
			ans = numArray[i];
		}
	}
	printf("%d\n",ans);
}

int main(){
	smallest();
	return 0;
}