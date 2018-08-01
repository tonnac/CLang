#include <stdio.h>

int main(void)
{
	int num1, num2, num3, result;
	printf("세 개의 정수입력: ");scanf("%d %d %d", &num1, &num2, &num3);
	result = (num1 - num2)*(num2 + num3)*(num3%num1);
	printf("(%d － %d)×(%d ＋ %d)×(%d / %d) ＝ %d\n", num1, num2, num2, num3, num3, num1, result);

	return 0;
}