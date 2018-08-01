#include <stdio.h>
#include <string.h>

void Enter(char * a)
{
	int b = strlen(a);
	a[b - 1] = 0;
}

int main(void)
{
	char str1[20];
	char str2[20];
	char str3[40];

	fputs("str1 입력 : ", stdout);
	fgets(str1, sizeof(str1), stdin);
	Enter(str1);

	fputs("str2 입력 : ", stdout);
	fgets(str2, sizeof(str2), stdin);
	Enter(str2);

	strncpy_s(str3, sizeof(str3), str1, sizeof(str1));
	strncat_s(str3, sizeof(str3), str2, sizeof(str2));

	puts(str3);
	return 0;
}