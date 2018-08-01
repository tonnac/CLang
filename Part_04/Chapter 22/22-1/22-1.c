#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct employee
{
	char name[20];
	char Num[15];
	int pay;
};

void ClearLine(void)
{
	while (getchar() != '\n');
}

int main(void)
{
	struct employee a, b, c;

	fputs("이름 입력 : ",stdout);
	fgets(a.name, sizeof(a.name), stdin);
	a.name[strlen(a.name) - 1] = 0;
	fputs("주민번호 입력 : ", stdout);
	fgets(a.Num, sizeof(a.Num), stdin);
	ClearLine();
	a.Num[15] = 0;
	fputs("급여 입력 : ", stdout);
	scanf("%d", &a.pay);
	ClearLine();

	fputs("이름 입력 : ", stdout);
	fgets(b.name, sizeof(b.name), stdin);
	b.name[strlen(b.name) - 1] = 0;
	fputs("주민번호 입력 : ", stdout);
	fgets(b.Num, sizeof(b.Num), stdin);
	ClearLine();
	b.Num[15] = 0;
	fputs("급여 입력 : ", stdout);
	scanf("%d", &b.pay);
	ClearLine();

	fputs("이름 입력 : ", stdout);
	fgets(c.name, sizeof(c.name), stdin);
	c.name[strlen(c.name) - 1] = 0;
	fputs("주민번호 입력 : ", stdout);
	fgets(c.Num, sizeof(c.Num), stdin);
	ClearLine();
	c.Num[15] = 0;
	fputs("급여 입력 : ", stdout);
	scanf("%d", &c.pay);

	printf("이름 :%s\n", a.name);
	printf("번호 :%s\n", a.Num);
	printf("급여 :%d\n\n", a.pay);

	printf("이름 :%s\n", b.name);
	printf("번호 :%s\n", b.Num);
	printf("급여 :%d\n\n", b.pay);

	printf("이름 :%s\n", c.name);
	printf("번호 :%s\n", c.Num);
	printf("급여 :%d\n", c.pay);

	_getch();
	return 0;
}