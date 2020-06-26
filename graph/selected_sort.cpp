#include <stdio.h>

int main(void)
{
	int arr[10] = { 5, 10, 1, 8, 7, 6, 4, 3, 2, 9};
	
	int temp = 0 ;
	int min  ;
	
	for(int i = 0 ; i < 10 ; i++)
	{	
		//최소값 min찾기 
		//전체 배열만큼 돌면서 현재값보다 다음값이 작으면 min(최소값)을 바꿔준다. 
		//바꾼 min값을 배열의 맨 앞으로 옮긴다. 
//		if( min > arr[i])
//		{
			min  = arr[i];
//		}
		
		for(int j = i  ; j < 10 ; j++)
		{
			if(min > arr[j])
			{
				min    = arr[j];
				temp   = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
//		printf("%d일때 min값 : %d\n", i, min);
	}
	
	printf("선택정렬된 배열 arr :");
	
	for(int k = 0 ; k < 10 ; k++)
	{
		printf(" %d |", arr[k]);
	}
	
}
