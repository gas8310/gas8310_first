#include <stdio.h>
#include <math.h>

/*�簢���� ���̿� �ѷ��� ���ϴ� �Լ�*/
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
	printf("���� ����� ��ǥ�� �Է��ϼ���");
	scanf("%d %d", &r.p1.x, &r.p1.y);
	
	printf("������ �ϴ��� ��ǥ�� �Է��ϼ���");
	scanf("%d %d", &r.p2.x, &r.p2.y);
	
	w = abs(r.p2.x - r.p1.x);
	h = abs(r.p2.y - r.p1.y);
	
	area = w * h;
	peri = (2 * w) + (2 * h);
	
	printf("�簢���� ���̴� %d�Դϴ�.", area);	
	printf("�簢���� �ѷ����̴� %d�Դϴ�.", peri);	
	
	return 0;
}
