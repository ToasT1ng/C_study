#include <stdio.h>

int pow_me(int i){
	int pow = 1;
	for (int j=0 ; j<i ; j++){
		pow *= 2;
	}
	return pow;
}

void convertToDecimal(){
	int bin[4] = {0,};
	int num;
	int ans = 0;
	for(int i=0 ; i<4 ; i++) {
		scanf("%d",&num);
		bin[i] = num;
	}
	for(int i=0 ; i<4 ; i++){
		ans += bin[i] * pow_me(4-i-1);
	}
	printf("%d\n", ans);

}

int main(){
	convertToDecimal();
	return 0;
}