#include <stdio.h>

int main(void)
{
	int ch, i;
	FILE * fp = fopen("data.txt", "rt");
	if (fp == NULL)
	{
		puts("���Ͽ��� ����");
		return -1;
	}

	for (i = 0;i < 3;i++)
	{
		ch = fgetc(fp);
		fputc(ch, stdout);
		puts("");
	}
	fclose(fp);
	return 0;
}