#include <stdio.h>

/*두 변수의 값을 서로 교환하기*/

void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x   = *y;
	*y   = temp;
}

int main(void){
	int x = 1;
	int y = 2;
	swap(&x, &y); //&가 없는 경우 실 값만 가지고 함수에서 값변경만 일어날뿐 실제 주소에 대한 값은 안바뀜. 
	printf("x = %d\ny = %d\n", x, y);
	return 0;
}
