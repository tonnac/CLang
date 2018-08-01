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
	printf("정수 입력 :");scanf("%d", &(a.iBuf));
	printf("상위 2바이트 : %u\n", a.sBuf.upper);
	printf("하위 2바이트 : %u\n", a.sBuf.lower);
	printf("상위 1바이트 아스키코드 : %c\n", a.bBuf[0]);
	printf("하위 1바이트 아스키코드 : %c\n", a.bBuf[3]);
	return 0;
}