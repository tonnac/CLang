#include <stdio.h>

typedef struct
{
	int xpos;
	int ypos;
}Point;

typedef struct
{
	Point cen;
	double rad;
}Circle;

void ShowCircleInfo(Circle * a)
{
	printf("[%d, %d]", (*a).cen.xpos, (a->cen).ypos);
	printf("radius: %g\n\n", a->rad);
}

int main(void)
{
	Circle c1 = { {1,2},3.5 };
	Circle c2 = { 2,4,3.9 };
	ShowCircleInfo(&c1);
	ShowCircleInfo(&c2);

	return 0;
}