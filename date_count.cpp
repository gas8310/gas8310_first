#include <stdio.h>
//1�� 1�� ���� ���� ��¥���� ��¥ ���� ���ϱ�. 
int getDays(int month, int day)
{
	int i, sum = 0;
	for(i = 1; i < month; i++)
	{
		if(i == 2)
		{
			sum += 28;
		}else if(i % 2 == 0)
		{
			sum += 30;
		}else
		{
			sum += 31;
		}
	}
	return sum;
} 

int main(void){
	int month, day, days;
	
	printf("��¥(��)�� �Է��ϼ���");
	scanf("%d", &month);
	printf("��¥(��)�� �Է��ϼ���");
	scanf("%d", &day);
	
	days = getDays(month, day);
	
	printf("1�� 1�Ϻ��� �Է��� ��¥ %d��%d�� ������ �ϼ��� %d�Դϴ�.", month, day, days);
	return 0;
}
