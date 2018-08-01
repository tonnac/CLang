#include <stdio.h>
#include <stdlib.h>

int Length(void);
char * Allocation(int iLen);
char * Input(char * str);

int main(void)
{
	int iSpace = 0;
	int iLen;
//	int * arr;
	char * str;
	int i;
	iLen = Length();
	str = Allocation(iLen);
	Input(str);
//	arr = (int*)malloc(sizeof(int) * 10);
	for (i = iLen-1;i >=0 ;i--)
	{
		if (str[i] == ' ')
		{
			str[i] = 0;
			printf("%s ", &str[i + 1]);
		}
	}
/*
	for (iSpace--;iSpace >= 0;iSpace--)
	{
		printf("%s ", &str[arr[iSpace]+1]);
	}
*/
	printf("%s\n", str);

	free(str);
//	free(arr);
	return 0;
}

int Length(void)
{
	int iLen;
	printf("문자열의 길이 입력: ");
	scanf("%d", &iLen);
	getchar();
	return iLen;
}
char * Allocation(int iLen)
{
	char * str;
	str = (char*)malloc(sizeof(char)*iLen);
	return str;
}
char * Input(char * str)
{
	fputs("문자열 입력 : ", stdout);
	gets(str);
	return str;
}
