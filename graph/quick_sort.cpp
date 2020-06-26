#include <stdio.h>

//������ O(N*logN) - ����!!
//���� ���� �˰���.
//Ư���迭�� ������ ���.
//n���� �������� ���ذ�(pivot)�� ã�Ƽ�ū���� �������� ������ ������.
//���� ����տ� �ִ°��� pivot������ ���� 
//������ 2���ε�? 
//�������� index�� ū���� index���� �۾�����(����) 
//���ذ��� �������� �ٲ��ش�.  
//������ �ڸ��� �ִ� ���ذ��� 
//                           ������ ���غ��� ������,  
//                           ������ ���غ���   ū��. 
//pivot�� �Ǿ� ������ 3. 
void quickSort(int *data, int start, int end )
{
	if(start >= end )
	{
		return;
	}
	
	int key = start; //Ű�� ù��° ����
	int i = start + 1;
	int j = end ;
	
	int temp ; //������ ���� �ӽ� ����
	
	//������ �����ʺ��� �۰ų� ���������� ��ӹݺ� 
	while( i <= j) 
	{
		//Ű������ ū���� ���������� -> ������������ ����� �����κ� 1 
		while(data[i] <= data[key])
		{
			i++;
		}
		
		//Ű������ �������� ���������� + j �� pivot���ٴ� Ŀ���Ѵ�.   -> ������������ ����� �����κ� 2
		while(data[j] >= data[key] && j > start)
		{
			j--;
		}
		
		//i�� j�� �����ɶ� -> ����ó��. 
		
		//�������� ��������. 
		//key���� ���� ���� ��ȯ.
		if( i < j)
		{
			temp           = data[j];
			data[j] 	   = data[i];
			data[i] 	   = temp;
		//������ ����. ( i > j�� �Ǿ� ù��° while�� ��. ->�����ʿ�. 
		}else
		{
			temp       	   = data[j];
			data[j] 	   = data[start];
			data[start]    = temp;
		}
	}
	
	quickSort(data, start, j - 1) ;
	quickSort(data, j + 1, end );
}

int main(void)
{
	int arr[10] = { 3, 7, 8, 1, 5, 9, 6, 10, 2, 4};
    
    quickSort(arr, 0, 9);
    
    for(int i = 0 ; i < 10 ; i++)
    {
    	printf("%d |", arr[i]);
	}
}

 
