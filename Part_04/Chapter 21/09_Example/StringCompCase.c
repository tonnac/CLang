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
	fputs("문자열 입력 1: ",stdout);
	fgets(str1, sizeof(str1), stdin);
	ClearLine(str1);
	fputs("문자열 입력 2: ", stdout);
	fgets(str2, sizeof(str2), stdin);
	ClearLine(str2);
	a = Num(str1, str2) ? Num(str1, str2) : 1;
	if (!strcmp(str1, str2))
	{
		puts("두 문자열은 완벽히 동일합니다.");
	}
	else
	{
		puts("두 문자열은 동일하지 않습니다.");

		if (!strncmp(str1, str2, a))
			printf("그러나 앞 %d 글자는 동일합니다.\n",a);
	}
	return 0;
}