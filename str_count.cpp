#include <stdio.h>
/*하나의 문자열 안의 글자수 세기*/

int main(void){
	char input[1001];
	gets(input);
	int count = 0;
	while(input[count] != '\0'){
		count++;	
	}
	
	printf("입력한 문자열의 길이는 %d입니다", count);
	printf("입력한 문자열은 %s입니다.", input);
	return 0;
}
