#include <stdio.h>

typedef struct
{
	int xpos;
	int ypos;
}Point;

Point AddPoint(Point m, Point n)
{
	Point c;
	c.xpos = m.xpos + n.xpos;
	c.ypos = m.ypos + n.ypos;
	return c;
}

Point MinusPoint(Point m, Point n)
{
	Point c = { m.xpos - n.xpos,m.ypos - n.ypos };
	return c;
}

int main(void)
{
	Point pos1 = { 5,6 };
	Point pos2 = { 3,4 };
	Point result;
	result = AddPoint(pos1, pos2);
	printf("[%d, %d]\n", result.xpos, result.ypos); 
	result = MinusPoint(pos1, pos2);
	printf("[%d, %d]\n", result.xpos, result.ypos);
	return 0;
}