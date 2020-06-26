#include <stdio.h>

//�������� - ����, ����
//�������� ���  ���ĵǾ��ִ� �迭�� ���Ľ� O(N^2)�� ����ð��� ���. 
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
	
	//���� �迭�� index�� �߰������� Ŀ���� ���(�������)
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
	
	//���ĵ� �迭�� ���� �迭�� ����.
	 for(int t = m ; t <= n ; t++)
	 {
	 	arr[t] = sort[t];
	 }
}

void mergeSort(int arr[], int m, int n)
{
	if(m < n)
	{
		//��� �� ã�� 
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
