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
	struct employee a[3];

	for (int i = 0;i < 3;i++)
	{
		fputs("�̸� �Է� : ", stdout);
		fgets(a[i].name, sizeof(a[i].name), stdin);
		a[i].name[strlen(a[i].name) - 1] = 0;
		fputs("��ȣ �Է� : ", stdout);
		fgets(a[i].Num, sizeof(a[i].Num), stdin);
		a[i].Num[strlen(a[i].Num) - 1] = 0;
		fputs("�޿� �Է� : ", stdout);
		scanf("%d", &a[i].pay);
		ClearLine();
	}

	for (int i = 0;i < 3;i++)
		printf("%s %s %d\n", a[i].name, a[i].Num, a[i].pay);

	return 0;
}