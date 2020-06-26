#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 5

//���� ť ����
typedef struct queue
{
	int front;
	int rear ;
	int data[MAX_QUEUE_SIZE];
} queue;

void init_queue(queue *queue)
{
	queue->front = -1;
	queue->rear  = -1;
}

int isEmpty(queue *q)
{
	if(q->front == q->rear)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isFull(queue *q)
{
	if(q->rear == MAX_QUEUE_SIZE - 1){
		return 1;
	}
	else
	{
		return 0;
	}
}

void enq(queue *q, int data)
{
	if(isFull(q))
	{
		printf("ť�� ��ȭ�����Դϴ�.");
		return; 
	}
	q->data[++(q->rear)] = data;
}

int deq(queue *q)
{
	if(isEmpty(q))
	{
		printf("ť�� ����ֽ��ϴ�.");
		return -1;
	}
	
	int data = q->data[++(q->front)];
	return data;
}

void queue_print(queue *queue)
{
	for(int i = 0 ; i < MAX_QUEUE_SIZE ; i++)
	{
		if(i <= queue->front || i > queue->rear)
		{
			printf(" |");
		}
		else
		{
			printf("%d |", queue->data[i]);
		}
	}
	printf("\n");
}

int main()
{
	int data = 0;
	queue q;
	init_queue(&q);
	
	enq(&q, 10);
	enq(&q, 20);
	enq(&q, 30);
	enq(&q, 40);
	
	queue_print(&q);
	
	deq(&q);
	
	queue_print(&q);
	//ù��° ������ deq ���� front ��ġ. 
	printf("front �� : %d", q.front);
	
	deq(&q);
	deq(&q);
	deq(&q);
	
	queue_print(&q); 
	
	printf("front �� : %d, rear �� : %d", q.front, q.rear);
	
	enq(&q, 50);
	
	queue_print(&q); 
	
	enq(&q, 60);
		
	queue_print(&q); 
		
	return 0;
}
