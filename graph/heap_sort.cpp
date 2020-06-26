#include <stdio.h> 

//heap����O(N*logN)
//�ִ�heap�� ����� ���Ĺ��. 
//root���� ������ ����� ���� ������
//���� ����.

//�迭�� ���ۼ��Ҹ� �Է¹޾� �������� �ʱ�ȭ ��Ű�� �Լ�. 
void heapInit(int *data, int number)
{
	int temp;
	//��ü Ʈ�� ������ �ִ� �� ������ ����
	//���ʰ��� �������� ��ȯ�ϰ� ���ļ���? 
	for(int i = 1 ; i < number ;i++)
	{
		//���� �ڽĳ�忡 ���� �θ��带 ã������ -1 / 2 �Ѵ�. 
		//�θ��尡 �ڽĳ�庸�� ������� �� ��ȯ.
		//root���� ���鼭 �ݺ��Ͽ� ��ȯ / ����. 
 
		//���ȣ���� ���� ���� 
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
		
		printf("i�� : %d : data[i] �� : %d\n", i, data[i]);
	}
}

//root�� ���� �������� ���Ҹ� ��ȯ�ϴ°� �迭 ������ŭ �ݺ� 
void heapSort(int *data, int number)
{
	for(int i = number - 1 ; i >= 0 ; i--)
	{
		int temp = data[0];
		data[0]  = data[i];
		data[i]  = temp;
		
		//root���� ���� �ڽĳ�� �� ū ���� ã�Ƽ� �ڽ��� �θ��庸�� ū���̸� ��ȯ 
		int root = 0;
		int c    = 1;
		
		do
		{
			c = 2 * root + 1;
			//�ڽĳ���� ū��... 
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
