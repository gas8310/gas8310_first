#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#define max_arr_size 7

//이진트리 구현
typedef struct treeNode
{
	int data;
	struct treeNode *left, *right;
} treeNode;

//     t1
//   /  |
//  t2  t3

//중위운행 : 좌 중 우 
void inorder(treeNode *root)
{
	//root가 0이면 false / 그외의 경우true 
	if(root)
	{
		inorder( root->left); 		//좌측 서브트리 순회 : 단말노드에서 좌측 자식이 null이므로 출력없음. 
		printf("중위운행 [%d]\n", root->data) ;  //단말노드에서 좌측 자식이 null일때 단말노드 값 출력 
		inorder( root->right);      //우측 서브트리 순회 : 단말노드에서 우측 자식이 null이므로 출력없음. 
	}
}

//전위운행 : 중 좌 우 
void preorder(treeNode *root)
{
	if(root)
	{
		printf("전위운행 [%d]\n", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}


//후위운행 : 좌 우 중
void postorder(treeNode *root) 
{
	if(root)
	{
		postorder(root->left);
		postorder(root->right);
		printf("후위운행 [%d]\n", root->data);
	}
}

int main()
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
	
	printf("중위운행====\n");
	inorder(t1) ;
	printf("전위운행====\n");
	preorder(t1) ;
	printf("후위운행====\n");
	postorder(t1) ;
	
	
	//트리 데이터 확인. 
//	printf("  root : %d\n,   t2 : %d ,   t3 : %d ,   t4 : %d ,   t5 : %d ,   t6 : %d ,   t7 : %d ", t1->data, t2->data, t3->data, t4->data, t5->data, t6->data, t7->data);
	return 0;	
}
