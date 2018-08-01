#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char ch[100];
	int a[100];
	int i = 0;
	int j;
	int t = 0;
	fputs("문자열 입력 : ", stdout);
	fgets(ch, sizeof(ch), stdin); //48~57;
	for (j = 0;j < strlen(ch);j++)
	{
		if (ch[j] <= 57 && ch[j] >= 48)
			a[i++] = (ch[j] - 48);
	}
	for (j = 0;j < i;j++)
	{
		printf("%d + ", a[j]);
		t += a[j];
	}
	printf("\b\b\b = %d\n", t);
	return 0;
}