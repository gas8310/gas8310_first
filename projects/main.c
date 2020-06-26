#include <stdio.h>
#include <stdlib.h>
#include "inc_selected_sort.h"
#define number 10

//순차검색 : linear Search -> 전체 검색

//이진검색 : binary Search -> 이진검색 -> 빠르고 -> logn 

//배열과 찾을값 x를 받아서 index를 return한다. 
int linear_search(int *arr, int x)
{
	int i;
	for(i = 0 ; i < number ; i++)
	{
		if(arr[i] == x)
		{
			return i;
		}
	}
	return -1;
}

//이진검색 
//배열의 i(i=0부터 배열의 레벨만큼)번째와 비교하여 작으면 왼쪽 자식, 크면 오른쪽 자식으로 이동 -> 반복
//배열의 레벨(높이) = 원소 갯수가 n인 배열인 경우 n = 2^n - 1개의 원소를 가질 수 있으므로
//높이 l = n / 2 => 정수부분이 높이가 된다.
//배열의 경우 부모 n의 자식이 존재할 때 왼쪽 자식 =  n/2 이고, 오른쪽 자식은 n/2 + 1. 
int binary_search(int *arr, int x) 
{
	int left = 0;
	int middle;
	int right = number - 1;
	
	while(left <= right)
	{
		middle = (left + right) / 2;
		//찾을 값이 middle인 경우 return; 
		if(arr[middle] == x)
		{
			return middle;
		}
		//middle보다 작은 경우 
		else if(arr[middle] > x)
		{
			right = middle - 1;
		}
		else if(arr[middle] < x)
		{
			left = middle + 1;
		}
	}
	return -1;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//일단 이진탐색트리로 넣어줌... 
//	int arr[number] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int arr[number] = {};
	int num ;
	int x ; 
	 
	printf("%d %s\n", number, "자리 배열을 생성합니다. \n 데이터를 입력해주세요.");
	
	int i;
	
	for(i = 0 ; i < number ; i++)
	{
		scanf("%d", &num);
		arr[i] = num;
	}
	
	//이진검색의 경우 정렬된 데이터(오름차순)가 필요하므로
	//선택정렬을 이용하여 오름차순 정렬한다.
	selected_sort(arr);
	
	printf("검색할 값을 입력해주세요\n");
	scanf("%d", &x );
	
	int linear_result = linear_search(arr, x);
	
	int binary_result = binary_search(arr, x);
	
	//선형검색의 경우. 
	printf("%s\n", "선형검색 시작");
	if( linear_result == -1)
	{
		printf("%s\n", "찾는값이 존재하지 않습니다.");
	}
	else
	{
		printf("찾는 값 x의 위치는 %d 이며 값은 %d입니다.\n", linear_result, arr[linear_result]);
	} 
	
	//이진검색의 경우
	printf("%s\n", "이진검색 시작") ;
	if( binary_result == -1)
	{
		printf("%s\n", "찾는값이 존재하지 않습니다.");
	}
	else
	{
		printf("찾는 값 x의 위치는 %d 이며 값은 %d입니다.\n", binary_result, arr[binary_result]);
	} 
	return 0;
}
