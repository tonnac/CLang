#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

int main(void)
{
	struct point pos1 = { 1,2 };
	struct point pos2 = { 100,200 };
	struct point * p = &pos1;


	(*p).xpos += 4;
	(*p).ypos += 5;
	printf("[%d %d]\n", p->xpos, p->ypos);

	p = &pos2;

	p->xpos += 50;
	p->ypos -= 50;

	printf("[%d %d]\n", (*p).xpos, (*p).ypos);
	return 0;
}