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
		puts("���Ͽ��� ����");
		return -1;
	}

	while (1)
	{
		Cnt = fscanf(fp, "%s %c %d", name, &sex, &age);
		if (Cnt == EOF)
		{
			puts("���Ϸε� ��");
			break;
		}
		printf("%s %c %d\n", name, sex, age);
	}
	return 0;
}