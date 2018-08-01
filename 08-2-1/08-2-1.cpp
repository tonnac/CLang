#include <stdio.h>

int main(void)
{
	for (int i = 1;; i++)
	{
		if (i > 9)
			break;
		if (i % 2)
			continue;
		for (int j = 1; j <= i; j++)
		{
			printf("%d ¡¿ %d = %d\n", i, j, i*j);
		}
	}
	return 0;
}