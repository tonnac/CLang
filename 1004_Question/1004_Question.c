#include <stdio.h>

int main()
{
	int iBread = 500;
	int iShrimp = 700;
	int iCola = 400;
	for (int i = 1; i < 7; i++)
	{
		for (int k = 1; k < 5; k++)
		{
			for (int j = 1; j < 10; j++)
			{
				if (iBread*i + iShrimp * k + iCola * j == 3500)
				{
					printf("ũ���� %d��, ����� %d��, �� �� %d��\n", i, k, j);
				}
			}
		}
	}
}