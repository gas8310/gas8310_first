#include <stdio.h> 
#include <stdlib.h>
#define MAX_QUEUE_SIZE 6

//����ť(������� ���� : m) 
//�ʱ���� : front�� rear �� ���� ���-> ������ �����ҿ� rear�� ���� �ʰ� ����ξ� ���������  
//full���� : front%m == (rear + 1 ) % m �� ��� 

typedef int element;

typedef struct queue
{
	int front;
	int rear ;
	element data[MAX_QUEUE_SIZE];
} queue;

void init_queue(queue *q)
{
	q->front = q->rear = 0;
	q->data[0] = '\0';
}

int isEmpty(queue *q)
{
	if(q->front == q->rear)
	{
		printf("����ť�� ����ֽ��ϴ�.") ;
		return 1; //true 
	}
	else
	{
		return 0; //false
	}
}

int isFull(queue *q)
{
	if( (q->front ) == (q->rear + 1) % MAX_QUEUE_SIZE)
	{
		printf("����ť�� ��ȭ���°� �˴ϴ�.");
		return 1;
	}
}

void print_queue(queue *q)
{
	for(int i = 0 ; i < MAX_QUEUE_SIZE ; i++)
	{
		printf("%d |", q->data[i]);	
	}
	printf("\n");
}

void enq(queue *q, int data)
{
	//����ť�� full �̸� 
	if(isFull(q))
	{
		return;
	}
	else
	{
		q->rear = ++(q->rear) % MAX_QUEUE_SIZE;
		q->data[q->rear] = data;
	}
}

element deq(queue *q)
{
	//����ť�� is not empty �̸�
	if(isEmpty(q)) 
	{
		return -1;
	}
	else
	{
		q->front = ++(q->front )%MAX_QUEUE_SIZE;
		return q->data[q->front];
	}
}

int main(){
	
	queue *q = (queue *)malloc(sizeof(queue));
	int element;
	
	init_queue(q);
	
	printf("������ �߰� �ܰ�--\n");
	
	while(!isFull(q))
	{
		printf("������ �Է��ϼ���");
		scanf("%d", &element);
		enq(q, element);
		print_queue(q);
	}
	
	printf("ť�� ��ȭ���� �Դϴ�.");
	
	printf("������ �����ܰ� \n");
	
	while(!isEmpty(q))
	{
		element = deq(q);
		printf("%d\n", element);
		print_queue(q);
	}
	printf("ť�� ��������Դϴ�.");
	
	return 0;
}
