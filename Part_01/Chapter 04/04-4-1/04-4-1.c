#include <stdio.h>

int main(void)
{
	int num1;
	printf("���� �Է�: ");scanf("%d", &num1);
	num1 = ~num1 + 1;
	printf("%d\n", num1);

	return 0;
}