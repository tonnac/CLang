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

	fputs("�̸� �Է� : ",stdout);
	fgets(a.name, sizeof(a.name), stdin);
	a.name[strlen(a.name) - 1] = 0;
	fputs("�ֹι�ȣ �Է� : ", stdout);
	fgets(a.Num, sizeof(a.Num), stdin);
	ClearLine();
	a.Num[15] = 0;
	fputs("�޿� �Է� : ", stdout);
	scanf("%d", &a.pay);
	ClearLine();

	fputs("�̸� �Է� : ", stdout);
	fgets(b.name, sizeof(b.name), stdin);
	b.name[strlen(b.name) - 1] = 0;
	fputs("�ֹι�ȣ �Է� : ", stdout);
	fgets(b.Num, sizeof(b.Num), stdin);
	ClearLine();
	b.Num[15] = 0;
	fputs("�޿� �Է� : ", stdout);
	scanf("%d", &b.pay);
	ClearLine();

	fputs("�̸� �Է� : ", stdout);
	fgets(c.name, sizeof(c.name), stdin);
	c.name[strlen(c.name) - 1] = 0;
	fputs("�ֹι�ȣ �Է� : ", stdout);
	fgets(c.Num, sizeof(c.Num), stdin);
	ClearLine();
	c.Num[15] = 0;
	fputs("�޿� �Է� : ", stdout);
	scanf("%d", &c.pay);

	printf("�̸� :%s\n", a.name);
	printf("��ȣ :%s\n", a.Num);
	printf("�޿� :%d\n\n", a.pay);

	printf("�̸� :%s\n", b.name);
	printf("��ȣ :%s\n", b.Num);
	printf("�޿� :%d\n\n", b.pay);

	printf("�̸� :%s\n", c.name);
	printf("��ȣ :%s\n", c.Num);
	printf("�޿� :%d\n", c.pay);

	_getch();
	return 0;
}