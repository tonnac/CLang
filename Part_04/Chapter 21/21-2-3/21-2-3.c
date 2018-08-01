#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Space(char*);
void AgeCheck(char*, char*, char*);
void NameCheck(char*, char*, char*);

int main(void)
{
	int Cnt;
	char * ch1 = "이정선 29";
	char * ch2 = "한수정 7";
	char * ch3 = "오정선 17"; //32

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
		printf("나이가 같다\n");
	else
		printf("다르다\n");
}

void NameCheck(char*a, char*b, char*c)
{
	if (!strncmp(a, b, Max(Space(a),Space(b))) || !strncmp(b, c, Max(Space(b), Space(c))) || !strncmp(a, c, Max(Space(c), Space(a))))
		printf("이름이 같다\n");
	else
		printf("다르다\n");
}

int Max(int m, int n)
{
	int a;
	a = m > n ? m : n;
}