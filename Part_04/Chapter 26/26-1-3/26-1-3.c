#include <stdio.h>

#define COMP(a, b) ( (a) > (b) ? (a) : (b) )

int main(void)
{
	int num1, num2;

	printf("�� �� �����Է�: ");
	scanf_s("%d %d", &num1, &num2);

	printf("�� �� �� ū���� : %d\n", COMP(num1, num2)); //a>b

	return 0;
}