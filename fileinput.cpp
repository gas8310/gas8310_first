#include <stdio.h>
//���� �����. 

int main(void){
	FILE *fp = NULL;
	int c;
	fp = fopen("input.txt", "r"); //������ 
	 if(fp == NULL){
	 	printf("���� ���⿡ �����߽��ϴ� \n");
	 	
	 }else{
	 	printf("���� ���⿡ �����Ͽ����ϴ�. \n") ;
	 }
	 
	while((c = fgetc(fp)) != EOF)
	{
		putchar(c);
	}
	fclose(fp);
	return 0; 
}