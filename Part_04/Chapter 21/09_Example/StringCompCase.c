#include <stdio.h>
#include <string.h>

void ClearLine(char * m)
{
	int a = strlen(m);
	m[a - 1] = 0;
}

int Num(char * n, char * m)
{
	int a = strlen(n);
	int b = strlen(m);
	int c = a > b ? a : b;
	int i;
	int d = 0;
	for (i = 1;i < c;i++)
	{
		if (!strncmp(n, m, i))
			d++;
	}
	return d;
}

int main(void)
{
	char str1[20];
	char str2[20];
	int a;
	fputs("���ڿ� �Է� 1: ",stdout);
	fgets(str1, sizeof(str1), stdin);
	ClearLine(str1);
	fputs("���ڿ� �Է� 2: ", stdout);
	fgets(str2, sizeof(str2), stdin);
	ClearLine(str2);
	a = Num(str1, str2) ? Num(str1, str2) : 1;
	if (!strcmp(str1, str2))
	{
		puts("�� ���ڿ��� �Ϻ��� �����մϴ�.");
	}
	else
	{
		puts("�� ���ڿ��� �������� �ʽ��ϴ�.");

		if (!strncmp(str1, str2, a))
			printf("�׷��� �� %d ���ڴ� �����մϴ�.\n",a);
	}
	return 0;
}