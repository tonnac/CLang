#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int iSelect;
	scanf_s("%d", &iSelect);
	for (int i = 0; i < iSelect; i++)
	{
		for (int j = 0; j < iSelect - 1 - i;j++)
		{
			printf("-");
		}	
		for (int j = 0; j <= 2*i; j++)
		{
			if (!(j % 2))
				printf("*");
			else
				printf(" ");
		}
		puts("");
	}
	for (int i = iSelect-2; i >= 0; i--)
	{
		for (int j = 0; j < iSelect - 1 - i;j++)
		{
			printf("-");
		}
		for (int j = 0; j <= 2 * i; j++)
		{
			if (!(j % 2))
				printf("*");
			else
				printf(" ");
		}
		puts("");
	}
}