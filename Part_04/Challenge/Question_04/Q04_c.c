#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * Execute(int argc, char * argv[])
{
	char * ch = (char*)malloc(sizeof(char) * 30);
	if (argc != 2)
	{
		puts("잘못된 입력입니다.");
	}
	else
	{
		if (!strcmp(&argv[1][strlen(argv[1]) - 3], "txt"))
		{
			strcpy(ch, argv[1]);
			return ch;
		}
		else
		{
			puts("파일의 형식이 잘못됐습니다.");
		}
	}
}
FILE * open(char * ch)
{
	FILE * fp;
	fp = fopen(ch, "rt");
	if (fp == NULL)
	{
		puts("파일열기 실패!");
	}
	return fp;
}

int main(int argc,char * argv[])
{
	int a = 0;
	int p = 0;
	int c;
	char p1[100];
	char * ch;
	FILE * fp;
	ch = Execute(argc, argv);
	fp = open(ch);

	while (1)
	{
		c = fscanf(fp, "%s", p1);
		if (p1[0] == 'p' || p1[0] == 'P')
		{
			printf("%s\n", p1);
			p++;
		}
		else if (p1[0] == 'a' || p1[0] == 'A')
		{
			printf("%s\n", p1);
			a++;
		}

		if (c == EOF)
			break;

	}

	printf("A로 시작하는 단어의 수:%d\n", a);
	printf("P로 시작하는 단어의 수:%d\n", p);

	fclose(fp);
	free(ch);
	return 0;
}