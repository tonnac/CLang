#include <stdio.h>

int main(void)
{
	int num1, num2;
	int quotient, remainder;
	printf("정수 두개 입력: ");scanf("%d %d", &num1, &num2);
	quotient = num1 / num2; remainder = num1 % num2;

	printf("%d ÷ %d 의 몫 %d, 나머지 %d\n", num1, num2, quotient, remainder);

	return 0;
}