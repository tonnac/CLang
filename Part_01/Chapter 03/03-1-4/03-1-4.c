#include <stdio.h>

int main(void)
{
	int num1, num2;
	int quotient, remainder;
	printf("���� �ΰ� �Է�: ");scanf("%d %d", &num1, &num2);
	quotient = num1 / num2; remainder = num1 % num2;

	printf("%d �� %d �� �� %d, ������ %d\n", num1, num2, quotient, remainder);

	return 0;
}