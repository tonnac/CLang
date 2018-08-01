#include <stdio.h>

int MaxFunc(const int a, const int b)
{
	return a > b ? a : b;
}

int MinFunc(const int a, const int b)
{
	return a < b ? a : b;
}

int main()
{
	int num1, num2;
	printf("정수 두개입력: ");
	scanf_s("%d %d", &num1, &num2);
	for (size_t i = MinFunc(num1, num2); i <= MaxFunc(num1, num2); i++)
	{
		for (size_t j = 1; j < 10; j++)
		{
			printf("%d×%d = %d\n", i, j, i*j);
		}
	}
	return 0;
}