#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int agrc,char * agrv[])
{
	char ch1[20];
	char ch2[20];
	char ch3;
	char ch4;
	FILE * fp1 = fopen(agrv[1], "rt");
	FILE * fp2 = fopen(agrv[2], "rt");
	while (1)
	{
		ch3 = fgetc(fp1);
		ch4 = fgetc(fp2);
		if (ch3 != ch4)
		{
			puts("둘은 다르당");
			return 0;
		}
		if (ch3==EOF && ch4==EOF)
			break;
	}
/*
	while (1)
	{
		fgets(ch1, 20, fp1);
		fgets(ch2, 20, fp2);
		if (strcmp(ch1, ch2))
		{
			puts("둘은 다르당");
			return 0;
		}
		if (feof(fp1) && feof(fp2))
			break;
	}
*/
	puts("둘은 같당");

	fclose(fp1);
	fclose(fp2);

	return 0;
}