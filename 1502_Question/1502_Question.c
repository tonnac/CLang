#include <stdio.h>
#include <stdlib.h>

void printBinary(int num)
{
	int i = 0;
	int temp = num;
	while (temp!=1)
	{
		temp /= 2;
		i++;
	}
	int * ptr = (int*)malloc(sizeof(int)*(i+1));
	int ptrlen = i+1;
	while (num != 1)
	{
		ptr[i--] = num % 2;
		num /= 2;
	}
	ptr[i] = num;
	for (int k = 0; k < ptrlen; k++)
	{
		printf("%d", ptr[k]);
	}
	puts("");
}

int main()
{
	int num;
	scanf_s("%d", &num);
	printBinary(num);
	return 0;
}