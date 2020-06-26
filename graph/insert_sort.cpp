#include <stdio.h>

//삽입정렬
//앞의 원소들이 정렬되었다는 가정하에 수행.
//선택, 버블, 삽입 정렬중 가장빠른건 삽입 모두 수행시간은O(n^2)
//적절한 위치에 삽입만 하면된다.
 
int main(void)
{
	int arr[10] = { 5, 10, 1, 8, 7, 6, 4, 3, 2, 9};
	
	int temp = 0 ;
	
	//1~9까지 돌면서
	//1일때 0번값과 비교
	//1값이 작으면 값 교환
	//2일때 0~2보다 작을때까지의 값들과 비교하여
	// 
	for(int i = 0 ; i < 9 ; i++)
	{
		int j = i;
		while(arr[j] > arr[j+1])
//		for(int j = 0 ; j < i ; j++)
		{
//			if( arr[j] > arr[i])
//			{
				temp   = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				j--;
//			}
		}
	}
	
	printf("삽입정렬된 배열 arr :");
	
	for(int k = 0 ; k < 10 ; k++)
	{
		printf(" %d |", arr[k]);
	}
	
	return 0; 
}
