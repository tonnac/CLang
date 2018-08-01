#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

struct One
{
	double rad;
	struct point * D;
};

int main(void)
{
	struct point pos = { 1,2 };
	double d = 6.24;

	struct One lk = { d,&pos };
	printf("원의 반지름 : %f\n", lk.rad);
	printf("원의 중심 [%d, %d]\n", (lk.D)->xpos, (lk.D)->ypos);
	return 0;
}