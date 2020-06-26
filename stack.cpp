#include <stdio.h>
#include <string.h>
#include <limits.h>
#define MAX_STACK_SIZE 256

typedef int str;

str data[MAX_STACK_SIZE];

int top;

int stack_size()
{
	return top + 1;
}

void push(str e)
{
	if(top == MAX_STACK_SIZE - 1)
		printf("stack overflow");
	
	data[++top] = e;
}

str pop()
{
	if(top == -1)
		printf("stack underflow");
	return data[top--];
}

str pick()
{
	if(top == -1)
		printf("stack underflow");
	return data[top];
}


void print_stack()
{
	int i;
	
	for(i=0; i < stack_size();i++)
		printf("%-3d", data[i]);
		printf("\n");
}

int main(void)
{
	top = -1;
	
	printf("push 연산 수행\n");
//	for(int i = 1 ; i <= 10 ; i++)
		push(1755);
		push(1445);
		push(123);
		push(5527);
		push(1234);
		
	printf("stack 안의 데이터 : ");
		print_stack();
		
	printf("pop 연산 수행\n") ;
	printf("pop!!%3d : ", pop());
	printf("pop!!%3d : ", pop());
	printf("pop!!%3d : ", pop());
	printf("pop!!%3d : ", pop());
	push(7);
	
	printf("stack안의 데이터 (예상 : 1,2,3,4,5,6,7,8,9,10 > pop 10 > 9 > 8 > 7 > push 7\n");
	print_stack();
	
}
