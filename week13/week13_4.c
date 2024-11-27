#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct point
{
	int x;
	int y;
};

int getArea(struct point *pPtr1, struct point *pPtr2)
{
	int xdiff, ydiff, result;
	
	xdiff = (pPtr1->x) - (pPtr2->x);
	ydiff = (pPtr1->y) - (pPtr2->y);
	result = (xdiff)*(ydiff);
	
	return result;
}

int main(int argc, char *argv[]) 
{
	struct point p1, p2;
	struct point *pPtr1, *pPtr2;
	int area;
	
	pPtr1 = &p1, pPtr2 = &p2;
	
	printf("Input the coordinate p1 (x y): ");
	scanf("%d %d", &pPtr1->x, &pPtr1->y);
	printf("Input the coordinate p2 (x y): ");
	scanf("%d %d", &pPtr2->x, &pPtr2->y);
	
	area = getArea(pPtr1, pPtr2);
	
	printf("Area: %d", area);
	
	return 0;
}
