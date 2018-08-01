#include <stdio.h>

void OddNum(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] % 2)
		{
			printf("%d,", arr[i]);
		}
	}
	puts("");
}

void EvenNum(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		if (!(arr[i] % 2))
		{
			printf("%d,", arr[i]);
		}
	}
	puts("");
}

int main()
{
	int arr[10] = { 0, };
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	OddNum(arr, sizeof(arr) / sizeof(int));
	EvenNum(arr, sizeof(arr) / sizeof(int));


	return 0;
}