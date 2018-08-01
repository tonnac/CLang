#include <stdio.h>

int Max(int a, int b, int c)
{
	int r = a > b ? ((a > c) ? a : c) : ((b > c) ? b : c);
	return r;
}

int Min(int a, int b, int c)
{
	int r = a < b ? ((a < c) ? a : c) : ((b < c) ? b : c);
	return r;
}

int main(void)
{
	printf("%d %d\n", Max(12, 43, 65), Min(12, 43, 65));

	return 0;
}