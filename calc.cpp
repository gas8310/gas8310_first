#include <stdio.h>

int main(void)
{
	int number, x, i, sum = 0;
	
	printf("������ ������ �Է��ϼ���");
	scanf("%d", &number); //scanf�� ��� �ּҸ� �����ϹǷ� �ּҿ����� &���
	for(i = 0 ; i < number ; i++)
	{
		printf("������ ���� �Է��ϼ���");
		scanf("%d", &x);
		
		sum += x;
		
		printf("�հ� : %d ", sum);
	} 
	return 0;
}
