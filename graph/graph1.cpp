#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICS 6

//그래프 인접행렬 구현(무방향 그래프의 경우 대각선으로 대칭관계 성립.) 

typedef struct Graph{
	int n ; //정점의 갯수
	int adj_mat[MAX_VERTICS][MAX_VERTICS] ; //
} Graph;

//그래프 초기화
void init(Graph *g) 
{
	int r, c;
	g->n = 0;
	for(r = 0; r < MAX_VERTICS ; r++ )
	{
		for(c = 0; c < MAX_VERTICS ; c++)
			g->adj_mat[r][c] = 0;
	}
}

//정점삽입. 
void insert_vertext(Graph *g, int v)
{
	if(((g->n) ) > MAX_VERTICS ){
		printf("그래프 : 정점갯수 %d 초과", MAX_VERTICS);
		return; 
	}
	g->n++;
	printf("정점갯수 : %d\n", g->n);
}

//간선 삽입.
void insert_edge(Graph *g, int start, int end ) 
{
	if(start > g->n || end > g->n )
	{
		printf("그래프 : 정점 번호 오류 ");
		return;
	}
	//무방향 그래프의 인접행렬은 대각선 대칭이므로 아래와 같이 처리. 
	g->adj_mat[start][end ] = 1;
	g->adj_mat[end][start ] = 1;
}

void print_adj_mat(Graph *g)
{
	//인접행렬의 행 출력 
	for(int i = 0 ; i <= g->n ; i++)
	{
		if(i == 0)
		{
			printf("   0 |1 |2 |3 |4 |5 |\n")	;
		}
		//인접행렬의 열출력 
		for(int j = 0 ; j <= g->n ; j++)
		{
			if (j == 0)printf("%d |", i);
			printf("%d |", g->adj_mat[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	Graph *g;
	g = (Graph *)malloc(sizeof(Graph));
	
	init(g);
	
	for(int i = 0 ; i < 5 ; i++)
	{
		//6x6 의 인접행렬 생성
		insert_vertext(g, i); 
	}
	
	insert_edge(g, 0, 1);
	insert_edge(g, 0, 2);
	insert_edge(g, 0, 3);
	insert_edge(g, 0, 4);
	insert_edge(g, 0, 5);
	
	insert_edge(g, 1, 2);
	insert_edge(g, 1, 3);
	
	print_adj_mat(g);
	
	free(g);
}
