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
	puts("도서 정보 입력");
	for (iCnt = 0;iCnt < 3;iCnt++)
	{
		fputs("저자:", stdout);
		fgets(p[iCnt].Name, sizeof(p[iCnt].Name), stdin);
		fputs("제목:", stdout);
		fgets(p[iCnt].Writer, sizeof(p[iCnt].Writer), stdin);
		fputs("페이지 수:", stdout);
		scanf_s("%d", &p[iCnt].Page);
		getchar();
	}
}

void Output(BOOK * p)
{
	int iCnt;
	puts("도서 정보 출력");
	for (iCnt = 0;iCnt < 3;iCnt++)
	{
		printf("book %d\n", iCnt + 1);
		fputs("저자:", stdout);
		fputs(p[iCnt].Name, stdout);
		fputs("제목:", stdout);
		fputs(p[iCnt].Writer, stdout);
		fputs("페이지 수:", stdout);
		printf("%d\n", p[iCnt].Page);
	}
}