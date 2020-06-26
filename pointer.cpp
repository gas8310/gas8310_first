#include <stdio.h>

/*포인터 변수의 값 변환*/


int main(void){
	int i = 10;
	int *p;
	p = &i;
	printf("i = %d\n", i);
	*p = 20;
	printf("i = %d\n", i);
}
