#include "inc_selected_sort.h"

void selected_sort(int *arr)
{
	int temp = 0 ;
	int min  ;
	int i ;	
	int j ;
	int k ;
	for(i = 0 ; i < 10 ; i++)
	{
	
		//�ּҰ� minã�� 
		//��ü �迭��ŭ ���鼭 ���簪���� �������� ������ min(�ּҰ�)�� �ٲ��ش�. 
		//�ٲ� min���� �迭�� �� ������ �ű��. 
//		if( min > arr[i])
//		{
			min  = arr[i];
//		}
		
		for( j = i  ; j < 10 ; j++)
		{
			if(min > arr[j])
			{
				min    = arr[j];
				temp   = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
//		printf("%d�϶� min�� : %d\n", i, min);
	}
	
	printf("include �������ĵ� �迭 arr :");
	
	for(k = 0 ; k < 10 ; k++)
	{
		printf(" %d |", arr[k]);
	}
}
