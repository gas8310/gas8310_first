//�迭
#include <stdio.h>
#include <limits.h>
#define NUMBER 5 
//5���� ������ �ִ밪�� �ּҰ��� ��ġ���. 

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
//	printf("�ش� �迭�� max �� ��ġ�� %d�̰� �� ���� %d �Դϴ�.\n", idx_max, arr[idx_max]);
//	printf("�ش� �迭�� min �� ��ġ�� %d�̰� �� ���� %d �Դϴ�."  , idx_min, arr[idx_min]);

//	int idx_max = ;
//	int idx_min = ;
	printf("�ش� �迭�� max �� ��ġ�� %d�̰� �� ���� %d �Դϴ�.\n", getMax(), arr[getMax()]);
	printf("�ش� �迭�� min �� ��ġ�� %d�̰� �� ���� %d �Դϴ�."  , getMin(), arr[getMin()]);
	return 0;	
}
