#include <stdio.h>

int main()
{
	int arr[10];
	int i = 0;
	int k = 9;
	for (int j = 0; j < 10; j++)
	{
		int num;
		scanf_s("%d", &num);
		if (num % 2)
		{
			arr[i++] = num;
		}
		else
		{
			arr[k--] = num;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (i != 0)
		{
			printf(" %d", arr[i]);
		}
		else
			printf("%d", arr[i]);
	}
	return 0;
}