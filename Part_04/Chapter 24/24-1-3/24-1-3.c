#include <stdio.h>

int main(void)
{
	FILE * fp = fopen("mystory.txt", "rt");
	char ch[20];

	if (fp == NULL)
	{
		puts("���Ͽ��� ����");
		return -1;
	}
	while ((fgets(ch, sizeof(ch), fp)) != NULL)
		fputs(ch, stdout);
/*
	while ((ch = fgetc(fp)) != EOF)
	{
		fputc(ch, stdout);
	}
*/
	fclose(fp);
	return 0;
}