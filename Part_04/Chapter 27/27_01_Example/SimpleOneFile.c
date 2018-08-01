#include <stdio.h>

void Increment(void);

int main(void)
{
	extern int num;
	extern int GetNum(void);


	printf("num: %d\n", GetNum());
	Increment();
	printf("num: %d\n", GetNum());
	Increment();
	printf("num: %d\n", GetNum());
	return 0;
}