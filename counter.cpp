#include <stdio.h>

//전역변수
int hour, minute, minuteAdd;

void counter()
{
	minute += minuteAdd;
	hour   += minute / 60;
	minute %= 60;
	hour   %= 24;
} 

//main 함수는 int 법칙이란다. 
int main(void)
{
	printf("시를 입력하세요 : ");
	scanf("%d", &hour);
	printf("분를 입력하세요 : ");
	scanf("%d", &minute);
	printf("더할 분을 입력하세요 : ");
	scanf("%d", &minuteAdd);
	
	counter();
	
	printf("더해진 시간은 %d시 %d분 입니다", hour, minute);
	return 0;
}
