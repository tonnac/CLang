#include <stdio.h>

//#define QUESTION_1
//#define QUESTION_2
#define QUESTION_3

int main()
{
#ifdef QUESTION_1
	int arr[3][9];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			arr[i][j] = (i + 2)*(j+1);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		puts("");
	}
#endif
#ifdef QUESTION_2
	int arr[2][4] = {
		{1,2,3,4},
		{5,6,7,8}
	};
	int arr1[4][2];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			arr1[i][j] = arr[j][i];
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		puts("");
	}
#endif
#ifdef QUESTION_3
	int arr[5][5];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
	}
	for (int j = 0; j < 4; j++)
	{
		arr[4][j] = arr[0][j] + arr[1][j] + arr[2][j] + arr[3][j];
		arr[j][4] = arr[j][0] + arr[j][1] + arr[j][2] + arr[j][3];
	}
	arr[4][4] = arr[0][4] + arr[1][4] + arr[2][4] + arr[3][4];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		puts("");
	}
#endif
	return 0;
}