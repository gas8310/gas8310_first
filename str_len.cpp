#include <stdio.h>
#include <string.h>
/*�ϳ��� ���ڿ� ���� ���ڼ� ����*/

int main(void){
	char input[5] = "Love";
	printf("�Է��� ���ڿ��� ���̴� %d�Դϴ�. ", strlen(input));
	
	char inputOne[5] = "A";
	char inputTwo[5] = "B";
	printf("���ڿ��� : %d\n", strcmp(inputOne, inputTwo));
	
	char inputx[10] = "abcdfff";
	char result[5] = "axg";
	
	strcpy(result, inputx);
	
	printf("���ڿ� ī�� %s ", result);
}
