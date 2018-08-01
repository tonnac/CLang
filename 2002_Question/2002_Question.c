#include <stdio.h>
#include <stdlib.h>


void Snailarray(int ** ptr, int column)
{
	int num = column;
	int k = 1;
	int i = 0;
	int j = 0;
	int m = 0;
	int iValue= 0;
	/*while (iValue != num*num)
	{
		for (i = 0; i < column; i++)
		{
			ptr[m][j] = ++iValue;
			j += k;
		}
		j -= k;
		m += k;
		column -= 1;
		for (i = 0; i < column; i++)
		{
			ptr[m][j] = ++iValue;
			m += k;
		}
		m -= k;
		k *= -1;
		j += k;

	}*/
	j = -1;
	while (iValue != num * num)
	{
		for (i = 0; i < column; i++)
		{
			j += k;
			ptr[m][j] = ++iValue;
		}
		column -= 1;
		for (i = 0; i < column; i++)
		{
			m += k;
			ptr[m][j] = ++iValue;
		}
		k *= -1;
	}
}

void PrintArray(int ** ptr, int column)
{
	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j < column; j++)
		{
			if (j != 0)
			{
				printf(" ");
			}
			printf("%3d", ptr[i][j]);
		}
		puts("");
	}
}

int main()
{
	int num;
	int ** ptr = NULL;
	printf("ют╥б: ");scanf_s("%d", &num);
	ptr = (int**)malloc(sizeof(int*)*num);
	for (int i = 0; i < num; i++)
	{
		ptr[i] = (int*)malloc(sizeof(int)*num);
	}

	Snailarray(ptr, num);
	PrintArray(ptr, num);
	


	for (int i = 0; i < num; i++)
	{
		free(ptr[i]);
	}
	free(ptr);
	return 0;
}