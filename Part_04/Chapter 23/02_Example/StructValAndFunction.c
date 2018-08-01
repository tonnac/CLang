#include <stdio.h>

typedef struct
{
	int xpos;
	int ypos;
}Point;

void ShowPosition(Point a)
{
	printf("[%d, %d]", a.xpos, a.ypos);
}

Point GetCurrentPosition(void)
{
	Point cen;
	printf("Input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

int main(void)
{
	Point curPos = GetCurrentPosition();
	ShowPosition(curPos);
	return 0;
}