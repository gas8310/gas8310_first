#include <stdio.h>

//병합정렬 - 분할, 정복
//퀵정렬의 경우  정렬되어있는 배열의 정렬시 O(N^2)의 수행시간이 든다. 
int number = 8;
int sort[8];

void merge(int arr[], int m, int middle, int n) 
{
	int i = m;
	int j = middle + 1;
	int k = m;
	
	while( i <= middle && j <= n)
	{
		if(arr[i] <= arr[j])
		{
			sort[k] = arr[i];
			i++;
		}
		else
		{
			sort[k] = arr[j];
			j++;
		}
		k++;
	}
	
	//좌측 배열의 index가 중간값보다 커지는 경우(끝난경우)
	if( i > middle) 
	{
		for(int t = j ; t <= n ; t++)
		{
			sort [k]  = arr[t];
			k++;
		}
	}else if( j > n)
	{
		for(int t = i ; t <= middle ; t++)
		{
			sort [k]  = arr[t];
			k++;
		}
	}
	
	//정렬된 배열을 원래 배열에 삽입.
	 for(int t = m ; t <= n ; t++)
	 {
	 	arr[t] = sort[t];
	 }
}

void mergeSort(int arr[], int m, int n)
{
	if(m < n)
	{
		//가운데 값 찾기 
		int middle = (m + n)  / 2 ;
		mergeSort(arr, m, middle);
		mergeSort(arr, middle+1, n);
		merge(arr, m, middle, n);
	}
}

int main(void) 
{
	int arr[number] = {7, 6, 5, 8, 3, 5, 9, 1};
	int m = 0;

	mergeSort(arr, m, number-1);
	
	for(int i = 0 ; i < number ; i++)
	{
		printf("%d |", arr[i]);
	}
	
}
