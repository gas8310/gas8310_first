#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#define max_arr_size 7

//����Ʈ�� ����
typedef struct treeNode
{
	int data;
	struct treeNode *left, *right;
} treeNode;

//     t1
//   /  |
//  t2  t3

//�������� : �� �� �� 
void inorder(treeNode *root)
{
	//root�� 0�̸� false / �׿��� ���true 
	if(root)
	{
		inorder( root->left); 		//���� ����Ʈ�� ��ȸ : �ܸ���忡�� ���� �ڽ��� null�̹Ƿ� ��¾���. 
		printf("�������� [%d]\n", root->data) ;  //�ܸ���忡�� ���� �ڽ��� null�϶� �ܸ���� �� ��� 
		inorder( root->right);      //���� ����Ʈ�� ��ȸ : �ܸ���忡�� ���� �ڽ��� null�̹Ƿ� ��¾���. 
	}
}

//�������� : �� �� �� 
void preorder(treeNode *root)
{
	if(root)
	{
		printf("�������� [%d]\n", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}


//�������� : �� �� ��
void postorder(treeNode *root) 
{
	if(root)
	{
		postorder(root->left);
		postorder(root->right);
		printf("�������� [%d]\n", root->data);
	}
}

int main()
{
	//����(����)�� 3�� ����Ʈ������
	//������ 3�� ����Ʈ���� ���� �ִ밪 = 2^3 - 1�� 
	//2^3 - 1 = ��. 
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
	
	printf("��������====\n");
	inorder(t1) ;
	printf("��������====\n");
	preorder(t1) ;
	printf("��������====\n");
	postorder(t1) ;
	
	
	//Ʈ�� ������ Ȯ��. 
//	printf("  root : %d\n,   t2 : %d ,   t3 : %d ,   t4 : %d ,   t5 : %d ,   t6 : %d ,   t7 : %d ", t1->data, t2->data, t3->data, t4->data, t5->data, t6->data, t7->data);
	return 0;	
}
