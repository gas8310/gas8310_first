#include <stdio.h>

int main(void)
{
	int number, x, i, sum = 0;
	
	printf("정수의 갯수를 입력하세요");
	scanf("%d", &number); //scanf의 경우 주소를 참조하므로 주소연산자 &사용
	for(i = 0 ; i < number ; i++)
	{
		printf("정수의 값을 입력하세요");
		scanf("%d", &x);
		
		sum += x;
		
		printf("합계 : %d ", sum);
	} 
	return 0;
}
