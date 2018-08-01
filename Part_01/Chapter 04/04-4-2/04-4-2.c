#include <stdio.h>

int main(void)
{
	int num1 = 3;
	num1 = num1 << 3;
	num1 = num1 >> 2;
	printf("%d\n", num1);

	return 0;
}