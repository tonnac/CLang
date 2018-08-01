#include <stdio.h>

typedef struct
{
	int xpos;
	int ypos;
}Point;

void OrgSymTrans(Point * a)
{
	a->xpos = (a->xpos) * -1;
	a->ypos = (a->ypos) * -1;
}

void ShowPosition(Point a)
{
	printf("[%d, %d]\n", a.xpos, a.ypos);
}

int main(void)
{
	Point s = { 7,-5 };
	OrgSymTrans(&s);
	ShowPosition(s);
	OrgSymTrans(&s);
	ShowPosition(s);
	return 0;
}