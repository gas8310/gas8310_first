#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
	char *pc = NULL;
	int i = 0;
	pc = (char *)malloc(sizeof(char) * 100);
	if(pc == NULL)
	{
		printf("동적 멤리 할당에 실패했습니다. \n");
		exit(1); 
	}
	//pc가 가리키는 포인터를 1씩 증가시키며 알파벳 소문자를 삽입. 
	for(i = 0 ; i < 25 ; i++) 
	{
		*(pc + i)= 'a' + i;
	}
	
	*(pc + i) = 0; //문자열 구분을 위한 null ASCII 
	
	FILE *fp;
	fp = fopen("alpha.txt", "w");
	if(fp == NULL)
	{
		printf("파일 열기에 실패했습니다. \n");
	}else{
		printf("파일 열기에 성공하였습니다. \n");
	}

	fputs(pc, fp)	;
//	printf("%s", pc);
//	free(pc);
	
	fclose(fp);
	
	return 0;
}
