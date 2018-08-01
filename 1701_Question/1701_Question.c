#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void MaxAndMin(int**aptr, int**iptr, int arr[],int arrlen)
{
	*aptr = arr + 0;
	*iptr = arr + 0;
	for (int i = 0; i < arrlen; i++)
	{
		if (**aptr < arr[i])
			*aptr = &arr[i];
		if (**iptr > arr[i])
			*iptr = &arr[i];
	}
}

int main()
{
	srand(time(NULL));
	int * maxPtr = NULL;
	int * minPtr = NULL;
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		arr[i] = rand() % 200;
	}
	MaxAndMin(&maxPtr, &minPtr, arr, sizeof(arr) / sizeof(int));
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	puts("");
	printf("%d %d\n", *maxPtr, *minPtr);
	return 0;
}