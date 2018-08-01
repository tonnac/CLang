#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int iLen = 5;
	int * arr = (int*)malloc(sizeof(int) * iLen);
	int Cnt = 0;
	int num;
	int i = 0;

	do
	{
		printf("숫자입력(-1은 종료) : ");
		scanf_s("%d", &num);
		if (num == -1)
		{
			break;
		}
		if (Cnt+1 == iLen)
		{
			iLen += 3;
			arr = (int*)realloc(arr, sizeof(int)*iLen);
		}
		arr[Cnt++] = num;
	} while (1);

	for (i = 0;i < Cnt;i++)
	{
		printf("%d ", arr[i]);
	}

	free(arr);

	return 0;
}