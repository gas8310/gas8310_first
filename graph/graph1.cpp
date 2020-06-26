#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICS 6

//�׷��� ������� ����(������ �׷����� ��� �밢������ ��Ī���� ����.) 

typedef struct Graph{
	int n ; //������ ����
	int adj_mat[MAX_VERTICS][MAX_VERTICS] ; //
} Graph;

//�׷��� �ʱ�ȭ
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

//��������. 
void insert_vertext(Graph *g, int v)
{
	if(((g->n) ) > MAX_VERTICS ){
		printf("�׷��� : �������� %d �ʰ�", MAX_VERTICS);
		return; 
	}
	g->n++;
	printf("�������� : %d\n", g->n);
}

//���� ����.
void insert_edge(Graph *g, int start, int end ) 
{
	if(start > g->n || end > g->n )
	{
		printf("�׷��� : ���� ��ȣ ���� ");
		return;
	}
	//������ �׷����� ��������� �밢�� ��Ī�̹Ƿ� �Ʒ��� ���� ó��. 
	g->adj_mat[start][end ] = 1;
	g->adj_mat[end][start ] = 1;
}

void print_adj_mat(Graph *g)
{
	//��������� �� ��� 
	for(int i = 0 ; i <= g->n ; i++)
	{
		if(i == 0)
		{
			printf("   0 |1 |2 |3 |4 |5 |\n")	;
		}
		//��������� ����� 
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
		//6x6 �� ������� ����
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
