#include <stdio.h>
/*�ϳ��� ���ڿ� ���� ���ڼ� ����*/

int main(void){
	char input[1001];
	gets(input);
	int count = 0;
	while(input[count] != '\0'){
		count++;	
	}
	
	printf("�Է��� ���ڿ��� ���̴� %d�Դϴ�", count);
	printf("�Է��� ���ڿ��� %s�Դϴ�.", input);
	return 0;
}
