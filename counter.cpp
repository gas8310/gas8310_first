#include <stdio.h>

//��������
int hour, minute, minuteAdd;

void counter()
{
	minute += minuteAdd;
	hour   += minute / 60;
	minute %= 60;
	hour   %= 24;
} 

//main �Լ��� int ��Ģ�̶���. 
int main(void)
{
	printf("�ø� �Է��ϼ��� : ");
	scanf("%d", &hour);
	printf("�и� �Է��ϼ��� : ");
	scanf("%d", &minute);
	printf("���� ���� �Է��ϼ��� : ");
	scanf("%d", &minuteAdd);
	
	counter();
	
	printf("������ �ð��� %d�� %d�� �Դϴ�", hour, minute);
	return 0;
}
