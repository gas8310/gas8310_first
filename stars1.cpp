#include <stdio.h>

//숫자 피라미드 출력 

//반복함수를 이용하여 숫자 피라미드 출력
 
int main(void){
	int i, j;
	
	
	for (i = 0 ; i <5 ; i++){
		for(j = i; j < 5 ; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;	
}
