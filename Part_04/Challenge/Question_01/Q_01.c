#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char Name[30];
	char Writer[20];
	int Page;
}BOOK;

void Input(BOOK * p);
void Output(BOOK * p);

int main(void)
{
	BOOK book[3];
	Input(book);
	Output(book);

	return 0;
}

void Input(BOOK * p)
{
	int iCnt;
	puts("���� ���� �Է�");
	for (iCnt = 0;iCnt < 3;iCnt++)
	{
		fputs("����:", stdout);
		fgets(p[iCnt].Name, sizeof(p[iCnt].Name), stdin);
		fputs("����:", stdout);
		fgets(p[iCnt].Writer, sizeof(p[iCnt].Writer), stdin);
		fputs("������ ��:", stdout);
		scanf_s("%d", &p[iCnt].Page);
		getchar();
	}
}

void Output(BOOK * p)
{
	int iCnt;
	puts("���� ���� ���");
	for (iCnt = 0;iCnt < 3;iCnt++)
	{
		printf("book %d\n", iCnt + 1);
		fputs("����:", stdout);
		fputs(p[iCnt].Name, stdout);
		fputs("����:", stdout);
		fputs(p[iCnt].Writer, stdout);
		fputs("������ ��:", stdout);
		printf("%d\n", p[iCnt].Page);
	}
}