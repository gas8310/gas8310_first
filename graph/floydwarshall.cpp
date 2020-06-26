#include <stdio.h> 

//플루이드 워샬알고리즘 구현

int number = 4;
int INF   = 1000000000;

//자료 배열 초기화
int a[4][4]  = {
				 {0  , 5  , INF, 8  }
			   , {7  , 0  , 9  , INF}
			   , {2  , INF, 0  , 4  }
			   , {INF, INF, 3  , 0  }
			   };
			   
void fw()
{
	//결과 그래프 초기화
	int result[number][number];
	
	//초기값 셋팅 
	for(int i = 0 ; i < number ; i++)
	{
		for(int j = 0 ; j < number ; j++)
		{
			result[i][j] = a[i][j];
		}
	}
	
	//k : 거쳐가는 노드 
	for(int k = 0 ; k < number ; k++)
	{
		//출발노드 
		for(int i = 0; i < number ; i++)
		{
			//도착노드 
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
