#include <stdio.h>

int main(void)
{
	int x;
	float y;
	
	x = 5;
	y = 3.431123; 
	
	printf("%d ", x);
	printf("변수 x의 메모리 크기는 %d입니다.", sizeof(x)); //4byte
	printf("변수 y의 실제 값은? %.3f 입니다", y);
	return 0;
}
