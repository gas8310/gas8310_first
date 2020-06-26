#include <stdio.h>
//1월 1일 부터 현재 날짜까지 날짜 차이 구하기. 
int getDays(int month, int day)
{
	int i, sum = 0;
	for(i = 1; i < month; i++)
	{
		if(i == 2)
		{
			sum += 28;
		}else if(i % 2 == 0)
		{
			sum += 30;
		}else
		{
			sum += 31;
		}
	}
	return sum;
} 

int main(void){
	int month, day, days;
	
	printf("날짜(월)를 입력하세요");
	scanf("%d", &month);
	printf("날짜(일)를 입력하세요");
	scanf("%d", &day);
	
	days = getDays(month, day);
	
	printf("1월 1일부터 입력한 날짜 %d월%d일 까지의 일수는 %d입니다.", month, day, days);
	return 0;
}
