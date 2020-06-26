#include <stdio.h>
#include <stdlib.h>
#include "inc_selected_sort.h"
#define number 10

//�����˻� : linear Search -> ��ü �˻�

//�����˻� : binary Search -> �����˻� -> ������ -> logn 

//�迭�� ã���� x�� �޾Ƽ� index�� return�Ѵ�. 
int linear_search(int *arr, int x)
{
	int i;
	for(i = 0 ; i < number ; i++)
	{
		if(arr[i] == x)
		{
			return i;
		}
	}
	return -1;
}

//�����˻� 
//�迭�� i(i=0���� �迭�� ������ŭ)��°�� ���Ͽ� ������ ���� �ڽ�, ũ�� ������ �ڽ����� �̵� -> �ݺ�
//�迭�� ����(����) = ���� ������ n�� �迭�� ��� n = 2^n - 1���� ���Ҹ� ���� �� �����Ƿ�
//���� l = n / 2 => �����κ��� ���̰� �ȴ�.
//�迭�� ��� �θ� n�� �ڽ��� ������ �� ���� �ڽ� =  n/2 �̰�, ������ �ڽ��� n/2 + 1. 
int binary_search(int *arr, int x) 
{
	int left = 0;
	int middle;
	int right = number - 1;
	
	while(left <= right)
	{
		middle = (left + right) / 2;
		//ã�� ���� middle�� ��� return; 
		if(arr[middle] == x)
		{
			return middle;
		}
		//middle���� ���� ��� 
		else if(arr[middle] > x)
		{
			right = middle - 1;
		}
		else if(arr[middle] < x)
		{
			left = middle + 1;
		}
	}
	return -1;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//�ϴ� ����Ž��Ʈ���� �־���... 
//	int arr[number] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int arr[number] = {};
	int num ;
	int x ; 
	 
	printf("%d %s\n", number, "�ڸ� �迭�� �����մϴ�. \n �����͸� �Է����ּ���.");
	
	int i;
	
	for(i = 0 ; i < number ; i++)
	{
		scanf("%d", &num);
		arr[i] = num;
	}
	
	//�����˻��� ��� ���ĵ� ������(��������)�� �ʿ��ϹǷ�
	//���������� �̿��Ͽ� �������� �����Ѵ�.
	selected_sort(arr);
	
	printf("�˻��� ���� �Է����ּ���\n");
	scanf("%d", &x );
	
	int linear_result = linear_search(arr, x);
	
	int binary_result = binary_search(arr, x);
	
	//�����˻��� ���. 
	printf("%s\n", "�����˻� ����");
	if( linear_result == -1)
	{
		printf("%s\n", "ã�°��� �������� �ʽ��ϴ�.");
	}
	else
	{
		printf("ã�� �� x�� ��ġ�� %d �̸� ���� %d�Դϴ�.\n", linear_result, arr[linear_result]);
	} 
	
	//�����˻��� ���
	printf("%s\n", "�����˻� ����") ;
	if( binary_result == -1)
	{
		printf("%s\n", "ã�°��� �������� �ʽ��ϴ�.");
	}
	else
	{
		printf("ã�� �� x�� ��ġ�� %d �̸� ���� %d�Դϴ�.\n", binary_result, arr[binary_result]);
	} 
	return 0;
}
