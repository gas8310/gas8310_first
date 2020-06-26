#include <stdio.h> 
#include <stdlib.h>
#define MAX_QUEUE_SIZE 6

//원형큐(저장공간 갯수 : m) 
//초기상태 : front와 rear 가 같은 경우-> 마지막 기억장소에 rear를 넣지 않고 비워두어 비었을때와  
//full상태 : front%m == (rear + 1 ) % m 인 경우 

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
		printf("원형큐가 비어있습니다.") ;
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
		printf("원형큐가 포화상태가 됩니다.");
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
	//원형큐가 full 이면 
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
	//원형큐가 is not empty 이면
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
	
	printf("데이터 추가 단계--\n");
	
	while(!isFull(q))
	{
		printf("정수를 입력하세요");
		scanf("%d", &element);
		enq(q, element);
		print_queue(q);
	}
	
	printf("큐는 포화상태 입니다.");
	
	printf("데이터 삭제단계 \n");
	
	while(!isEmpty(q))
	{
		element = deq(q);
		printf("%d\n", element);
		print_queue(q);
	}
	printf("큐는 공백상태입니다.");
	
	return 0;
}
