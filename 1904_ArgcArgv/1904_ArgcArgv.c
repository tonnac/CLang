#include <stdio.h>

int main(int argc, char * argv[])
{
	int i = 0;
	printf("���ڿ� ��: %d\n", argc);
	for (i = 0; i < argv[i]!=NULL; i++)
	{
		printf("���ڿ�: %s\n", argv[i]);
	}

	return 0;
}