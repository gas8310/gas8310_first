#include <stdio.h>
//파일 입출력. 

int main(void){
	FILE *fp = NULL;
	
	fp = fopen("output.txt", "w"); //쓰기모드 
	 if(fp == NULL){
	 	printf("파일 열기에 실패했습니다 \n");
	 	
	 }else{
	 	printf("파일 열기에 성공하였습니다. \n") ;
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
