#include <stdio.h>

int find_k(int value)
{
	int k = 0;
	int n = 1;
	do{
		n *= 2;
		k++;
	} while (n*2 <= value);
	return k;
}


int main()
{
	find_k(511);
	return 0;
}