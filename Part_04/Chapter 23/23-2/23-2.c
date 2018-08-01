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
	printf("�� �� �Է�: ");scanf("%d %d", &a.xpos, &a.ypos);
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
	printf("�� ���� ��ǥ\n");
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
	printf("���̴� %d\n", b);
	po(a);
	return 0;
}