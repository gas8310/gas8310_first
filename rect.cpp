#include <stdio.h>
#include <math.h>

/*사각형의 넓이와 둘레를 구하는 함수*/
typedef struct point{
	int x;
	int y;
};

typedef struct{
	point p1;
	point p2;
} rect ;
 
//typedef struct{
//	int number;
//	char name;
//	double gpa;	
//}Student ;

int main(void){
	rect r;
	
	int w, h, area, peri;
	printf("왼쪽 상단의 좌표를 입력하세요");
	scanf("%d %d", &r.p1.x, &r.p1.y);
	
	printf("오른쪽 하단의 좌표를 입력하세요");
	scanf("%d %d", &r.p2.x, &r.p2.y);
	
	w = abs(r.p2.x - r.p1.x);
	h = abs(r.p2.y - r.p1.y);
	
	area = w * h;
	peri = (2 * w) + (2 * h);
	
	printf("사각형의 넓이는 %d입니다.", area);	
	printf("사각형의 둘레길이는 %d입니다.", peri);	
	
	return 0;
}
