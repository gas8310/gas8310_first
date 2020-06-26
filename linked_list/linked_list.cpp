#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{
	int data;
	struct NODE *next;
} Node;

//���Ḯ��Ʈ�� ��� �߰� �Լ�
void addFirst(struct NODE *target, int data) 
{
	Node *newNode = (NODE *)malloc(sizeof(NODE));
	newNode->next = target->next;
	newNode->data = data;
	
	target->next  = newNode;
}

//���Ḯ��Ʈ�� ��� ���� �Լ�
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
	
//	printf("�ܼ� ���Ḯ��Ʈ�� ����ִ� �����ʹ� %d", node1->data);
	NODE *curr = header->next;
	
	//���Ḯ��Ʈ�� ������ �����Ͱ� NULL�� ���� Ȯ��. 
	while(curr != NULL)
	{
		printf("�ܼ� ���Ḯ��Ʈ�� ����ִ� �����ʹ� %d\n", curr->data);
		//���Ⱑ �����߿��� �κ�  
		curr = curr->next; 
	}

//	free(node2);
//	free(node1);
	free(header);
	return 0;
}
