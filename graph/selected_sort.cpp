#include <stdio.h>

int main(void)
{
	int arr[10] = { 5, 10, 1, 8, 7, 6, 4, 3, 2, 9};
	
	int temp = 0 ;
	int min  ;
	
	for(int i = 0 ; i < 10 ; i++)
	{	
		//�ּҰ� minã�� 
		//��ü �迭��ŭ ���鼭 ���簪���� �������� ������ min(�ּҰ�)�� �ٲ��ش�. 
		//�ٲ� min���� �迭�� �� ������ �ű��. 
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
//		printf("%d�϶� min�� : %d\n", i, min);
	}
	
	printf("�������ĵ� �迭 arr :");
	
	for(int k = 0 ; k < 10 ; k++)
	{
		printf(" %d |", arr[k]);
	}
	
}
