#include <stdio.h>

int main(void)
{
	char name[10];
	char sex;
	int age;

	int Cnt;

	FILE * fp = fopen("friend.txt", "rt");

	if (fp == NULL)
	{
		puts("파일열기 실패");
		return -1;
	}

	while (1)
	{
		Cnt = fscanf(fp, "%s %c %d", name, &sex, &age);
		if (Cnt == EOF)
		{
			puts("파일로딩 끝");
			break;
		}
		printf("%s %c %d\n", name, sex, age);
	}
	return 0;
}