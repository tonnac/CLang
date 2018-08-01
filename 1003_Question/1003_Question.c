#include <stdio.h>

int GCD(int num1, int num2)
{
	return num1 % num2 ? GCD(num2, num1 % num2) : num2;
}

int GCD1(int num1, int num2)
{
	int a = num1;
	int b = num2;
	int c = num1 % num2;
	while (c)
	{
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}

int main()
{
	int num1, num2;
	printf("두 개의 정수 입력:");
	scanf_s("%d %d", &num1, &num2);
	printf("%d\n", GCD1(num1, num2));

	return 0;
}