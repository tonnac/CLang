#include <stdio.h>


void Inputarray(int arr[][4], int column)
{
	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = (4 * i) + j + 1;
		}
	}
}
void Printarray(int(*arr)[4], int column)
{
	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (j != 0)
			{
				printf(" ");
			}
			printf("%2d", arr[i][j]);
		}
		puts("");
	}
	puts("");
}
void Rotation(int(*arr)[4], int column)
{
	int brr[4][4];
	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			brr[i][j] = arr[column-1 - j][i];
		}
	}
	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = brr[i][j];
		}
	}
}

int main()
{
	int arr[4][4];
	Inputarray(arr, sizeof(arr) / sizeof(arr[0]));
	Printarray(arr, sizeof(arr) / sizeof(arr[0]));
	Rotation(arr, sizeof(arr) / sizeof(arr[0]));
	Printarray(arr, sizeof(arr) / sizeof(arr[0]));
	Rotation(arr, sizeof(arr) / sizeof(arr[0]));
	Printarray(arr, sizeof(arr) / sizeof(arr[0]));
	Rotation(arr, sizeof(arr) / sizeof(arr[0]));
	Printarray(arr, sizeof(arr) / sizeof(arr[0]));
	Rotation(arr, sizeof(arr) / sizeof(arr[0]));
	Printarray(arr, sizeof(arr) / sizeof(arr[0]));
	return 0;
}