//배열
#include <stdio.h>
#include <limits.h>
#define NUMBER 5 
//5개의 정수중 최대값과 최소값의 위치출력. 

int arr[NUMBER] = {5, 6, 7, 8, 9};

int getMax(){
	int max ;
	int indexMax;
	max = 0;
	indexMax = 0;
	for(int i = 0 ; i < NUMBER ; i++){
		if(max < arr[i]){
			max = arr[i];
			indexMax = i;
		}
	}
	
	return indexMax;
}

int getMin(){
	int min ;
	int indexMin;
	min = INT_MAX;
	indexMin = 0;
	printf("min : %d indexMin : %d", min, indexMin );
	
	for(int i = 0 ; i < NUMBER ; i++){
		if(min > arr[i]){
			min = arr[i];
			indexMin = i;
		}
	}
	return indexMin;
}

int main(void){
	int max;
	int min;
	
//	int idx_max = getMax();
//	int idx_min = getMin();
//	printf("해당 배열의 max 값 위치는 %d이고 그 값은 %d 입니다.\n", idx_max, arr[idx_max]);
//	printf("해당 배열의 min 값 위치는 %d이고 그 값은 %d 입니다."  , idx_min, arr[idx_min]);

//	int idx_max = ;
//	int idx_min = ;
	printf("해당 배열의 max 값 위치는 %d이고 그 값은 %d 입니다.\n", getMax(), arr[getMax()]);
	printf("해당 배열의 min 값 위치는 %d이고 그 값은 %d 입니다."  , getMin(), arr[getMin()]);
	return 0;	
}
