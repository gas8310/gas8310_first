#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
	char *pc = NULL;
	int i = 0;
	pc = (char *)malloc(sizeof(char) * 100);
	if(pc == NULL)
	{
		printf("���� �⸮ �Ҵ翡 �����߽��ϴ�. \n");
		exit(1); 
	}
	//pc�� ����Ű�� �����͸� 1�� ������Ű�� ���ĺ� �ҹ��ڸ� ����. 
	for(i = 0 ; i < 25 ; i++) 
	{
		*(pc + i)= 'a' + i;
	}
	
	*(pc + i) = 0; //���ڿ� ������ ���� null ASCII 
	
	FILE *fp;
	fp = fopen("alpha.txt", "w");
	if(fp == NULL)
	{
		printf("���� ���⿡ �����߽��ϴ�. \n");
	}else{
		printf("���� ���⿡ �����Ͽ����ϴ�. \n");
	}

	fputs(pc, fp)	;
//	printf("%s", pc);
//	free(pc);
	
	fclose(fp);
	
	return 0;
}
