#include <stdio.h>

#define COMP(a, b) ( (a) > (b) ? (a) : (b) )

int main(void)
{
	int num1, num2;

	printf("두 개 정수입력: ");
	scanf_s("%d %d", &num1, &num2);

	printf("두 수 중 큰수는 : %d\n", COMP(num1, num2)); //a>b

	return 0;
}