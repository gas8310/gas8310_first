#include <stdio.h>

//퀵정렬 O(N*logN) - 빨라!!
//분할 정복 알고리즘.
//특정배열을 나눠서 계산.
//n개의 데이터중 기준값(pivot)을 찾아서큰수와 작은수를 반으로 나눈다.
//보통 가장앞에 있는값을 pivot값으로 선택 
//포인터 2개인듯? 
//작은값의 index가 큰값의 index보다 작아질때(교차) 
//기준값과 작은값을 바꿔준다.  
//작은값 자리에 있는 기준값의 
//                           좌측은 기준보다 작은값,  
//                           우측은 기준보다   큰값. 
//pivot은 맨앞 숫자인 3. 
void quickSort(int *data, int start, int end )
{
	if(start >= end )
	{
		return;
	}
	
	int key = start; //키는 첫번째 원소
	int i = start + 1;
	int j = end ;
	
	int temp ; //스왑을 위한 임시 변수
	
	//왼쪽이 오른쪽보다 작거나 같은동안은 계속반복 
	while( i <= j) 
	{
		//키값보다 큰값을 만날때까지 -> 내림차순으로 변경시 수정부분 1 
		while(data[i] <= data[key])
		{
			i++;
		}
		
		//키값보다 작은값을 만난때까지 + j 는 pivot보다는 커야한다.   -> 내림차순으로 변경시 수정부분 2
		while(data[j] >= data[key] && j > start)
		{
			j--;
		}
		
		//i와 j가 교차될때 -> 분할처리. 
		
		//엇갈리지 않은상태. 
		//key값과 작은 값을 교환.
		if( i < j)
		{
			temp           = data[j];
			data[j] 	   = data[i];
			data[i] 	   = temp;
		//엇갈린 상태. ( i > j가 되어 첫번째 while문 끝. ->분할필요. 
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

 
