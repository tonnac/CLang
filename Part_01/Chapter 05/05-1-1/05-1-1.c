#include <stdio.h>
#include <math.h>

int main(void)
{
	typedef struct
	{
		int xpos;
		int ypos;
	}Point;
	Point p1, p2;
	int area;
	printf("x,y��ǥ �Է�: ");scanf("%d %d", &p1.xpos, &p1.ypos);
	printf("x,y��ǥ �Է�: ");scanf("%d %d", &p2.xpos, &p2.ypos);
	area = abs((p1.xpos - p2.xpos)*(p2.ypos - p1.ypos));

	printf("���̴� : %d\n", area);
	return 0;
}