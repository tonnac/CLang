#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Space(char*);
void AgeCheck(char*, char*, char*);
void NameCheck(char*, char*, char*);

int main(void)
{
	int Cnt;
	char * ch1 = "������ 29";
	char * ch2 = "�Ѽ��� 7";
	char * ch3 = "������ 17"; //32

	AgeCheck(ch1, ch2, ch3);
	NameCheck(ch1, ch2, ch3);

	return 0;
}

int Space(char * a)
{
	int Cnt;
	for (Cnt = 0;Cnt < strlen(a);Cnt++)
	{
		if (a[Cnt] == ' ')
			return Cnt;
	}
}

void AgeCheck(char*a, char*b, char*c)
{
	int i, j, k;
	k = atoi(&c[Space(c) + 1]);
	i = atoi(&a[Space(a) + 1]);
	j = atoi(&b[Space(b) + 1]);
	if (k == i || i == j || j == k)
		printf("���̰� ����\n");
	else
		printf("�ٸ���\n");
}

void NameCheck(char*a, char*b, char*c)
{
	if (!strncmp(a, b, Max(Space(a),Space(b))) || !strncmp(b, c, Max(Space(b), Space(c))) || !strncmp(a, c, Max(Space(c), Space(a))))
		printf("�̸��� ����\n");
	else
		printf("�ٸ���\n");
}

int Max(int m, int n)
{
	int a;
	a = m > n ? m : n;
}