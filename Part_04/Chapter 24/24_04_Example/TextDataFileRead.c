#include <stdio.h>

int main(void)
{
	char str[30];
	int ch;
	FILE * fp = fopen("simple.txt", "rt");
	if (fp == NULL)
	{
		puts("파일열기 실패");
		return -1;
	}

	ch = fgetc(fp);
	fputc(ch, stdout);
	puts("");
	ch = fgetc(fp);
	fputc(ch, stdout);
	puts("");
	
	fgets(str, sizeof(str), fp);
	fputs(str, stdout);
	fgets(str, sizeof(str), fp);
	fputs(str, stdout);
	fclose(fp);
	return 0;

}