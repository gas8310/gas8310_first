#include <stdio.h> 
#include <stdlib.h>

int number = 6;
int INF    = 1000000000; //int는 약 21억 정도니....10억만 넣어도...

int a[6][6] = {
				{0  , 2  , 5  , 1  , INF, INF}
			  , {2  , 0  , 3  , 2  , INF, INF}
			  , {5  , 3  , 0  , 3  , 1  , 5  }
			  , {1  , 2  , 3  , 0  , 1  , INF}
			  , {INF, INF, 1  , 1  , 0  , 2  }
			  , {INF, INF, 5  , INF, 2  , 0  }			  
			  }
			  ;
bool v[6]; //방문한 노드

int dt[6] ; //최단거리 

//가장 최소 거리를 가지는 정점을 반환.
int getSmallIndex()
{
	int min = INF;
	int index = 0;
	for(int i = 0; i < number ; i++)
	{
		if(dt[i] < min && !v[i]) //배열을 0부터 5까지 돌면서, 0배열의 거리와 방문여부가 false면 값 변경.  
		{
			min   = dt[i];
			index = i;
		}
	}
	return index;
}
	
//다익스트라를 수행하는 함수
void dijkstra(int start)
{
	for (int i = 0 ; i < number ; i++)
	{
		dt[i] = a[start][i]; //0
	}
		v[start] = true; //시작점 방문처리. 
	
	for(int i = 0 ; i < number - 2 ; i++) //0, 1, 2, 3, 4 까지 총 5번 도는데.... 
	{
		//heap을 이용하는 구조로 변경....
		// 
		int curr = getSmallIndex(); //0이 가는 정점들 중에 가장작은 비용을 가지는 정점의 index 선택. 
		v[curr] = true;
		
		for(int j = 0 ; j < 6 ; j++)
		{
			if(!v[j])
			{
				//방문하지 않은 신규 정점인 경우
				//   dt[curr]   0일때 최소비용인 4의 index : 3의 비용
				// + a[curr][j] 0에서 최소비용인 4의 비용들 중 j정점까지의 비용 
				// (ex : 3까지는 0부터라면 5인데, 4를 거쳐 가면 2 + 1 = 3이 됨.)
				// 이때 dt[j]가 위의 값으로 변경된다. 
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
