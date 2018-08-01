#include <stdio.h>

typedef struct
{
	int xpos;
	int ypos;
}Point;

void SwapPoint(Point*a, Point*b)
{
	Point temp;
	//temp = a->xpos;
	//a->xpos = b->xpos;
	//b->xpos = temp;
	//temp = a->ypos;
	//a->ypos = b->ypos;
	//b->ypos = temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	Point pos1 = { 2,4 };
	Point pos2 = { 5,7 };

	SwapPoint(&pos1, &pos2);

	printf("[%d, %d]\n", pos1.xpos, pos1.ypos);
	printf("[%d, %d]\n", pos2.xpos, pos2.ypos);
	return 0;
}