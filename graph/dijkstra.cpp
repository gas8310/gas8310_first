#include <stdio.h> 
#include <stdlib.h>

int number = 6;
int INF    = 1000000000; //int�� �� 21�� ������....10�︸ �־...

int a[6][6] = {
				{0  , 2  , 5  , 1  , INF, INF}
			  , {2  , 0  , 3  , 2  , INF, INF}
			  , {5  , 3  , 0  , 3  , 1  , 5  }
			  , {1  , 2  , 3  , 0  , 1  , INF}
			  , {INF, INF, 1  , 1  , 0  , 2  }
			  , {INF, INF, 5  , INF, 2  , 0  }			  
			  }
			  ;
bool v[6]; //�湮�� ���

int dt[6] ; //�ִܰŸ� 

//���� �ּ� �Ÿ��� ������ ������ ��ȯ.
int getSmallIndex()
{
	int min = INF;
	int index = 0;
	for(int i = 0; i < number ; i++)
	{
		if(dt[i] < min && !v[i]) //�迭�� 0���� 5���� ���鼭, 0�迭�� �Ÿ��� �湮���ΰ� false�� �� ����.  
		{
			min   = dt[i];
			index = i;
		}
	}
	return index;
}
	
//���ͽ�Ʈ�� �����ϴ� �Լ�
void dijkstra(int start)
{
	for (int i = 0 ; i < number ; i++)
	{
		dt[i] = a[start][i]; //0
	}
		v[start] = true; //������ �湮ó��. 
	
	for(int i = 0 ; i < number - 2 ; i++) //0, 1, 2, 3, 4 ���� �� 5�� ���µ�.... 
	{
		//heap�� �̿��ϴ� ������ ����....
		// 
		int curr = getSmallIndex(); //0�� ���� ������ �߿� �������� ����� ������ ������ index ����. 
		v[curr] = true;
		
		for(int j = 0 ; j < 6 ; j++)
		{
			if(!v[j])
			{
				//�湮���� ���� �ű� ������ ���
				//   dt[curr]   0�϶� �ּҺ���� 4�� index : 3�� ���
				// + a[curr][j] 0���� �ּҺ���� 4�� ���� �� j���������� ��� 
				// (ex : 3������ 0���Ͷ�� 5�ε�, 4�� ���� ���� 2 + 1 = 3�� ��.)
				// �̶� dt[j]�� ���� ������ ����ȴ�. 
				if(dt[curr] + a[curr][j] < dt[j])
				{
					dt[j] = dt[curr] + a[curr][j];
				}
			}
		}
	}
}

int main(void)
{
	dijkstra(0);
	for(int i = 0 ; i < number ; i++)
	{
		printf("%d", dt[i]);
	}
}
