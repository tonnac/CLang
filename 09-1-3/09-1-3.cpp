#include <stdio.h>

size_t Fibonacci(int n)
{
	size_t a = 0;
	size_t b = 1;
	size_t c = 1;
	if (n == 0)
		return a;
	if (n == 1)
		return b;
	
	for (int i = 0; i < n-2; i++)
	{
		a = b;
		b = c;
		c = a + b;
	}
	return c;
}


int main(void)
{
	int num;
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++)
	{
		printf("%lld",Fibonacci(i));
		if (i < num - 1)
		{
			printf(", ");
		}
	}
	puts("");
	return 0;
}