#include <stdio.h>

typedef struct
{
	int xpos;
	int ypos;
}Point;

int main(void)
{
	Point pos1 = { 10,20 };
	Point pos2;
	pos2 = pos1;

	printf("ũ�� : %d\n", sizeof(pos1));
	printf("[%d, %d]\n", pos1.xpos, pos1.ypos);
	printf("ũ�� : %d\n", sizeof(pos2));
	printf("[%d, %d]\n", pos2.xpos, pos2.ypos);
	return 0;
}