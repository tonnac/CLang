#include <stdio.h>
#include <string.h>


typedef struct
{
	unsigned short upper;
	unsigned short lower;
}DBShort;

typedef union rdbuf
{
	int iBuf;
	char bBuf[4];
	DBShort sBuf;
}RDbuf;

int main(void)
{
	RDbuf a;
	char ch[10] = "Oh my st";
	char ch1[5];
	printf("���� �Է� :");scanf("%d", &(a.iBuf));
	printf("���� 2����Ʈ : %u\n", a.sBuf.upper);
	printf("���� 2����Ʈ : %u\n", a.sBuf.lower);
	printf("���� 1����Ʈ �ƽ�Ű�ڵ� : %c\n", a.bBuf[0]);
	printf("���� 1����Ʈ �ƽ�Ű�ڵ� : %c\n", a.bBuf[3]);
	return 0;
}