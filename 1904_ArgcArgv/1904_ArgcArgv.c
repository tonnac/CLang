#include <stdio.h>

int main(int argc, char * argv[])
{
	int i = 0;
	printf("문자열 수: %d\n", argc);
	for (i = 0; i < argv[i]!=NULL; i++)
	{
		printf("문자열: %s\n", argv[i]);
	}

	return 0;
}