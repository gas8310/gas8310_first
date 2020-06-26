#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#define max_arr_size 7
#define size 100

//이진트리 구현(stack사용) 
typedef struct treeNode
{
	int data;
	struct treeNode *left, *right;
} treeNode;

//스택사용을 위한 전역 변수 
int top = -1;

treeNode *stack[size];

//push 함수
void push(treeNode *p)
{
	if(top == size)
	{
		printf("stack overflow");
		return;
	}
	else
	{
		stack[++top] = p;
	}
}

//pop 함수
treeNode *pop()
{	
	treeNode * tree = stack[top--];
	return tree;
}

void inorder_iter(treeNode *root)
{
	while(1)
	{
		for(; root ; root = root->left)
			push(root);
			root = pop();
			//pop했는데 root에 값이 없으면 break. 
			if(!root) break;
			printf("[%d]\n", root->data);
			root = root->right;
	}
}

void preorder_iter(treeNode *root)
{
	while(1)
	{   for(; root ; root = root->left )
			push(root);
			root = pop();
			if(!root) break;
			printf("[%d\n", root->data);
			root = root->right;
	}
}

int main(void) 
{
	//레벨(높이)이 3인 이진트리구성
	//레벨이 3인 이진트리의 원소 최대값 = 2^3 - 1개 
	//2^3 - 1 = 개. 
	treeNode *t1 = (treeNode *)malloc(sizeof(treeNode));
	treeNode *t2 = (treeNode *)malloc(sizeof(treeNode));
 	treeNode *t3 = (treeNode *)malloc(sizeof(treeNode));
	treeNode *t4 = (treeNode *)malloc(sizeof(treeNode));
	treeNode *t5 = (treeNode *)malloc(sizeof(treeNode));
	treeNode *t6 = (treeNode *)malloc(sizeof(treeNode));
	treeNode *t7 = (treeNode *)malloc(sizeof(treeNode));
	
	//        t1 
	//    t2      t3
	//  t4  t5  t6  t7

	//root
	t1->data = 10;
	t1->left = t2;
	t1->right = t3;
	
	t2->data = 20;
	t2->left = t4;
	t2->right= t5;
	
	t3->data = 30;
	t3->left = t6;
	t3->right= t7;
	
	t4->data = 40;
	t4->left = NULL;
	t4->right= NULL;
	
	t5->data = 50;
	t5->left = NULL;
	t5->right= NULL;
	
	t6->data = 60;
	t6->left = NULL;
	t6->right= NULL;
	
	t7->data = 70;
	t7->left = NULL;
	t7->right= NULL;
	
//	printf("중위운행====\n");
//	inorder_iter(t1) ;
	printf("전위운행====\n");
	preorder_iter(t1) ;
//	printf("전위운행====\n");
//	preorder(t1) ;
//	printf("후위운행====\n");
//	postorder(t1) ;
}
