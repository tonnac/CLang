#include <stdio.h>

int main(void)
{
	FILE * fp = fopen("mystory.txt", "at");
	if (fp == NULL)
	{
		puts("���Ͽ��� ����");
		return -1;
	}
	char * ch1 = "#��ܸԴ� ����:«��,������\n";
	char * ch2 = "#���: �౸\n";

	fputs(ch1, fp);
	fputs(ch2, fp);

	fclose(fp);
	return 0;
}