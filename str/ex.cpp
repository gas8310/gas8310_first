#include <stdio.h>
#include <stdlib.h>

int main(void){
	int arrint[5] = {1, 3, 5, 7, 9};;
	char arrchar[5] = {'a', 'c', 'd', 'f', 'g'};
	
	int *x = NULL;
	x = (int *)malloc(sizeof(char));
	*x = arrchar[0];
	
	printf("%d", arrint);
	printf("%s", arrchar);
	printf("%c", *x);
}
