#include <stdio.h>

size_t exp(int a, int n)
{
	if (n <= 0)
		return 1;
	else if (n == 1)
		return a;
	
	return a * exp(a, n - 1);
}

size_t exp1(int a, int n)
{
	int iCnt = 0;
	size_t num = 1;
	if (n <= 0)
		return 1;
	else if (n == 1)
		return a;
	while (iCnt++ < n)
	{
		num *= a;
	}
	return num;
}

int main()
{
	size_t e = exp1(2, 32);
	return 0;
}