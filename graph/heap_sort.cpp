#include <stdio.h> 

//heap정렬O(N*logN)
//최대heap을 사용한 정렬방식. 
//root값을 마지막 노드의 값과 변경후
//정렬 수행.

//배열의 시작수소를 입력받아 힙구조로 초기화 시키는 함수. 
void heapInit(int *data, int number)
{
	int temp;
	//전체 트리 구조를 최대 힙 구조로 변경
	//최초값과 마지막값 교환하고 정렬수행? 
	for(int i = 1 ; i < number ;i++)
	{
		//양쪽 자식노드에 대해 부모노드를 찾기위해 -1 / 2 한다. 
		//부모노드가 자식노드보다 작은경우 값 교환.
		//root까지 가면서 반복하여 교환 / 정렬. 
 
		//재귀호출을 위한 변수 
		int c    = i;
		do
		{
			int root = (c - 1) / 2 ;		
			if(data[root] < data[c])
			{
				temp       = data[root];
				data[root] = data[c];
				data[c]    = temp;
			}
			c = root;
		} while (c != 0);
		
		printf("i값 : %d : data[i] 값 : %d\n", i, data[i]);
	}
}

//root와 가장 마지막의 원소를 교환하는걸 배열 갯수만큼 반복 
void heapSort(int *data, int number)
{
	for(int i = number - 1 ; i >= 0 ; i--)
	{
		int temp = data[0];
		data[0]  = data[i];
		data[i]  = temp;
		
		//root에서 부터 자식노드 중 큰 값을 찾아서 자식이 부모노드보다 큰값이면 교환 
		int root = 0;
		int c    = 1;
		
		do
		{
			c = 2 * root + 1;
			//자식노드중 큰값... 
			if(data[c] < data[c + 1])
			{
				c++;
			}
			
			if(data[root] < data[c] && c < i - 1)
			{
				int tmp    = data[root];
				data[root] = data[c];
				data[c]    = tmp;
			}
			root = c;
		} while( c < i);
	}
}

int main(void)  
{
	int arr[10] = {5, 4, 3, 2, 1, 7, 6, 8, 9, 10};
	int number = sizeof(arr)/sizeof(arr[0]);
	
	heapInit(arr, number);
	
	heapSort(arr, number);
	
	for(int i = 0 ; i < number ; i++)
	{
		printf("%d |", arr[i]);
	}
}
