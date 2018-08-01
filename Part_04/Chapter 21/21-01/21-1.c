#include <stdio.h>

int main(void)
{
	int a;

	while (1)
	{
		a = getchar();

		if (a == EOF)
			break;

		if (a >= 'A' && a <= 'Z')
			a += 32;
		else if (a >= 'a' && a <= 'z')
			a -= 32;

		putchar(a);
	}
}