#include <stdio.h>

#define PLUS(X,Y,Z) ((X)+(Y)+(Z))
#define MULTI(X,Y,Z) ((X)*(Y)*(Z))

int main(void)
{
	int num1, num2, num3;
	printf("������ ���� �Է� :");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("�� ���� ���� : %d\n", PLUS(num1, num2, num3));
	printf("�� ���� ���� : %d\n", MULTI(num1, num2, num3));

	return 0;
}