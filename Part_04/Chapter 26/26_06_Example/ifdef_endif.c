#include <stdio.h>
//#define ADD 
#define MIN 

int main(void)
{
	int num1, num2;
	printf("두 개의 정수입력: ");
	scanf_s("%d %d", &num1, &num2);

#ifndef ADD
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
#endif

#ifndef MIN
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
#endif

	return 0;
}