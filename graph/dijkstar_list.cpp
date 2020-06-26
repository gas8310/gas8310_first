#include <iostream> 
#include <vector>
#include <queue>

using namespace std ;

int number = 6;
int INF = 10000000000;

vector<pair<int, int> > a[7]; //��������. 

int dt[7]; //�ּҺ�� 

void dijkstra(int start)
{
	dt[start] = 0;
	
	priority_queue<pair<int, int> > pq; //heap ����.... 
	
	//����� ������� ö�ϹǷ� ť ���. 
	while(!pq.empty())
	{
		int curr = pq.top().first;
		int distance = -pq.top().second ; //����� ���� �������� ã�ƾ� �ϹǷ� �ִ����� �̿��ѰͿ� -����. 
		
		pq.pop();
		
		//�ִܰŸ��� �ƴѰ�� skip. 
		if(dt[curr] < distance) continue;
		for(int i = 0 ; i < a[curr].size();i++)
		{
			int next = a[curr][i].first;
			
			int nextDistance = nextDistance + a[curr][i].second ;
			
			if(nextDistance < dt[next])
			{
				dt[next]  = nextDistance;
				pq.push(make_pair(next, -nextDistance));
			}
		}
	}
}

int main(void)
{
	for(int i = 1 ; i <= number ; i++)
	{
		dt[i] = INF;
  	}
	
	a[1].push_back(make_pair(2, 2));
	a[1].push_back(make_pair(3, 5));
	a[1].push_back(make_pair(4, 1));
	
	a[2].push_back(make_pair(1, 2));
	a[2].push_back(make_pair(3, 3));
	a[2].push_back(make_pair(4, 2));
	
	a[3].push_back(make_pair(1, 5));
	a[3].push_back(make_pair(2, 3));
	a[3].push_back(make_pair(4, 3));
	a[3].push_back(make_pair(5, 1));
	a[3].push_back(make_pair(6, 5));
	
	a[4].push_back(make_pair(1, 1));
	a[4].push_back(make_pair(2, 2));
	a[4].push_back(make_pair(3, 3));
	a[4].push_back(make_pair(5, 1));
	
	a[5].push_back(make_pair(3, 1));
	a[5].push_back(make_pair(4, 1));
	a[5].push_back(make_pair(6, 2));
	
	a[6].push_back(make_pair(3, 5));
	a[6].push_back(make_pair(5, 2));
	
	dijkstra(1);
	
	for(int i = 1; i <= number ; i++)
	{
		printf("%d ", dt[i]);
	}
	return 0 ;
}