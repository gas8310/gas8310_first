#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{
	int data;
	struct NODE *next;
} Node;

//연결리스트에 노드 추가 함수
void addFirst(struct NODE *target, int data) 
{
	Node *newNode = (NODE *)malloc(sizeof(NODE));
	newNode->next = target->next;
	newNode->data = data;
	
	target->next  = newNode;
}

//연결리스트에 노드 삭제 함수
void removeFirst(struct NODE *target) 
{
	Node *removeNode = target->next;
	target->next     = removeNode->next;
	
	free(removeNode);
}

int main(void){
	NODE *header = (NODE *)malloc(sizeof(NODE));
	
	header->next= NULL;
	addFirst(header, 10);
	addFirst(header, 20);
	addFirst(header, 30);
	addFirst(header, 40);
	
	removeFirst(header);
	
//	NODE *node1 = (NODE *)malloc(sizeof(NODE));
//	
//	header->next = node1;
//	node1->data  = 10;
//	
//	NODE *node2 = (NODE *)malloc(sizeof(NODE));
//	node1->next = node2;
//	node2->data = 30;
//	
//	node2->next = NULL;
	
//	printf("단순 연결리스트에 들어있는 데이터는 %d", node1->data);
	NODE *curr = header->next;
	
	//연결리스트의 마지막 데이터가 NULL인 것을 확인. 
	while(curr != NULL)
	{
		printf("단순 연결리스트에 들어있는 데이터는 %d\n", curr->data);
		//여기가 가장중요한 부분  
		curr = curr->next; 
	}

//	free(node2);
//	free(node1);
	free(header);
	return 0;
}
