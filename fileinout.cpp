#include <stdio.h>
//���� �����. 

int main(void){
	FILE *fp = NULL;
	
	fp = fopen("output.txt", "w"); //������ 
	 if(fp == NULL){
	 	printf("���� ���⿡ �����߽��ϴ� \n");
	 	
	 }else{
	 	printf("���� ���⿡ �����Ͽ����ϴ�. \n") ;
	 }
	 
//	 while((c = fgetc(fp)) != EOF)
	 fputc('H', fp);
	 fputc('E', fp);
	 fputc('L', fp);
	 fputc('L', fp);
	 fputc('O', fp);
	fclose(fp);
	return 0; 
}