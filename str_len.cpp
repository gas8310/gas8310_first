#include <stdio.h>
#include <string.h>
/*하나의 문자열 안의 글자수 세기*/

int main(void){
	char input[5] = "Love";
	printf("입력한 문자열의 길이는 %d입니다. ", strlen(input));
	
	char inputOne[5] = "A";
	char inputTwo[5] = "B";
	printf("문자열비교 : %d\n", strcmp(inputOne, inputTwo));
	
	char inputx[10] = "abcdfff";
	char result[5] = "axg";
	
	strcpy(result, inputx);
	
	printf("문자열 카피 %s ", result);
}
