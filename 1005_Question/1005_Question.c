#include <stdio.h>


void PrimeNumber(int Count)
{
	int iCnt = 0;
	int MaxNum = 2;
	for (;iCnt < Count;iCnt++)
	{
		for (int i = 2; i <= MaxNum; i++)
		{
			if (!(MaxNum%i) && i != MaxNum)
			{
				i = 2;
				MaxNum++;
				continue;
			}
		}
		printf("%d ", MaxNum++);
	}
	puts("");
}



int main()
{
	PrimeNumber(359);
}