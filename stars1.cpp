#include <stdio.h>

//���� �Ƕ�̵� ��� 

//�ݺ��Լ��� �̿��Ͽ� ���� �Ƕ�̵� ���
 
int main(void){
	int i, j;
	
	
	for (i = 0 ; i <5 ; i++){
		for(j = i; j < 5 ; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;	
}
