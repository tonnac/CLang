#include <stdio.h>

int main(void)
{
	int i = 0;
	int sum = 0;

	do
	{
		sum += i;
		i += 2;
	} while (i <= 100);

	printf("%d\n", sum);

	return 0;
}