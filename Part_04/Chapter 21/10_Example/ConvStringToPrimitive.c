#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[20];
	printf("���� �Է�: ");
	scanf("%s", str);
	printf("%d \n", atoi(str));

	printf("�Ǽ� �Է� :");
	scanf("%s", str);
	printf("%g \n", atof(str));
	return 0;
}