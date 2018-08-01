#include <stdio.h>

#ifndef QUESTION_1
//#define QUESTION_1
int SquareByValue(int num)
{
	return num * num;
}
void SquareByReference(int * num)
{
	*num *= *num;
}
#endif
#ifndef QUESTION_2
#define QUESTION_2
void Swap3(int * num1, int * num2, int * num3)
{
	int temp = *num2;
	*num2 = *num1;
	*num1 = *num3;
	*num3 = temp;
}
#endif

int main()
{
#ifdef QUESTION_1
	int num = 3;
	printf("%d\n", SquareByValue(num));
	SquareByReference(&num);
	printf("%d\n", num);
#endif
#ifdef QUESTION_2
	int num1, num2, num3;
	num1 = 1;
	num2 = 2;
	num3 = 3;
	printf("%d %d %d\n", num1, num2, num3);
	Swap3(&num1, &num2, &num3);
	printf("%d %d %d\n", num1, num2, num3);
#endif
	return 0;
}