#include <stdio.h>

int main(void)
{
	int x;
	float y;
	
	x = 5;
	y = 3.431123; 
	
	printf("%d ", x);
	printf("���� x�� �޸� ũ��� %d�Դϴ�.", sizeof(x)); //4byte
	printf("���� y�� ���� ����? %.3f �Դϴ�", y);
	return 0;
}
