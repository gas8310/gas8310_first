#include <stdio.h> 

//�÷��̵� �����˰��� ����

int number = 4;
int INF   = 1000000000;

//�ڷ� �迭 �ʱ�ȭ
int a[4][4]  = {
				 {0  , 5  , INF, 8  }
			   , {7  , 0  , 9  , INF}
			   , {2  , INF, 0  , 4  }
			   , {INF, INF, 3  , 0  }
			   };
			   
void fw()
{
	//��� �׷��� �ʱ�ȭ
	int result[number][number];
	
	//�ʱⰪ ���� 
	for(int i = 0 ; i < number ; i++)
	{
		for(int j = 0 ; j < number ; j++)
		{
			result[i][j] = a[i][j];
		}
	}
	
	//k : ���İ��� ��� 
	for(int k = 0 ; k < number ; k++)
	{
		//��߳�� 
		for(int i = 0; i < number ; i++)
		{
			//������� 
			for(int j = 0 ; j < number ; j++)
			{
				if(result[i][j] > result[i][k] + result[k][j])
				{
					result[i][j] = result[i][k] + result[k][j];
				}
			}
		}
	}
	
	for(int i = 0 ; i < number ; i++)
	{
		for(int j = 0 ; j < number ; j++)
		{
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	fw();
}
