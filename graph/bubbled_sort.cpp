#include <stdio.h>

//버블정렬 

int main(void)
{
	int arr[10] = { 5, 10, 1, 8, 7, 6, 4, 3, 2, 9};
	
	int temp = 0 ;
	
	//1회전 : 5와 10 비교 -> 변경없음
	//      : 10과 1 비교 -> 자리교환
	//      : 10과 8 비교 -> 자리교환....맨 뒤 arr[10] 자리에 10 셋팅.
	
	
	//반복문 구조1: 10부터 1까지 줄어듬. 
	for(int i = 0 ; i < 10 ; i++) 
	{
		//반복문 구조2: 0 -> 10까지  증가.
		for(int j = 0 ; j < 9 - i ; j++)
		{
			if(arr[j] > arr[j+1])
			{
				//앞의 원소가 뒤의 원소보다 큰 경우 자리교환.
				//(0부터 외부 for문 i보다 작을때 까지: 회전을 한번 할때마다 max값이 맨뒤로 가므로.) 
				temp     = arr[j];
				arr[j]   = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("버블정렬된 배열 arr :");
	
	for(int k = 0 ; k < 10 ; k++)
	{
		printf(" %d |", arr[k]);
	}
}
