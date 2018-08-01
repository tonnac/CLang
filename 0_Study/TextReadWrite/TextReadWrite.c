#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


#define WRITE
//#define READ


#ifdef WRITE

int main(void)
{
	FILE * fp = fopen("prac.txt", "wt");
	int ch;
	if (fp == NULL)
	{
		puts("파일열기 실패");
		return -1;
	}

	/*	do
	{
	ch = getchar();
	fputc(ch, fp);
	} while (ch != EOF);*/
	fclose(fp);



	return 0;
}

#endif

#ifdef READ
int main(void)
{
	FILE * wt = fopen("pee.txt", "wt");
	FILE * rt = fopen("prac.txt", "rt");
	int ch;
	char ch1[5];

	if (wt == NULL || rt == NULL)
	{
		puts("파일열기 실패");
		return -1;
	}

	//	while ((ch=fgetc(rt))!= EOF)
	//		fputc(ch, wt);

	while (fgets(ch1, sizeof(ch1), rt) != NULL)
		fputs(ch1, wt);

	if (feof != 0)
		puts("파일복사 완료");
	else
		puts("파일복사 실패");

	fclose(wt);
	fclose(rt);

	return 0;

}

#endif