#include <stdio.h>
#include <math.h>

typedef struct
{
	int xpos;
	int ypos;
}Point;

typedef struct
{
	Point a;
	Point b;
}Rectangle;

Point pos(void)
{
	Point a;
	printf("두 점 입력: ");scanf("%d %d", &a.xpos, &a.ypos);
	return a;
}

int Area(Rectangle c)
{
	int n, m, a;
	n = (c.a.xpos - c.b.xpos);
	m = (c.a.ypos - c.b.ypos);
	return a = abs(n*m);
}

void po(Rectangle c)
{
	printf("네 점의 좌표\n");
	printf("[%d, %d]\n", c.a.xpos, c.a.ypos);
	printf("[%d, %d]\n", c.b.xpos, c.b.ypos);
	printf("[%d, %d]\n", c.a.xpos, c.b.ypos);
	printf("[%d, %d]\n", c.b.xpos, c.a.ypos);
}

int main(void)
{
	int b;
	Point n, m;
	n = pos();
	m = pos();
	Rectangle a = { n,m };
	b = Area(a);
	printf("넓이는 %d\n", b);
	po(a);
	return 0;
}