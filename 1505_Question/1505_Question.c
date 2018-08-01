#include <stdio.h>
#include <time.h>


void BubbleSort(int * arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void InsertionSort(int * arr, int len)
{
	int element;
	for (int i = 0; i < len; i++)
	{
		element = arr[i];
		int j = i - 1;
		while (j >= 0 && element > arr[j])
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = element;
	}
}

int main()
{
	int arr[15];
	srand(time(NULL));
	for (int i = 0; i < 15; i++)
	{
		arr[i] = rand() % 200;
	}
	for (int i = 0; i < 15; i++)
	{
		printf("%d ", arr[i]);
	}
	puts("");
	InsertionSort(arr, 15);
	for (int i = 0; i < 15; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}