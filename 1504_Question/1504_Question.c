#include <stdio.h>

void Palindrome(char * ch)
{
	int i = 0;
	while (ch[i++] != '\0');
	i--;
	for (int k = 0; k < i/2; k++)
	{
		int ivalue = abs(ch[k], ch[i- 1 - k]);
		if (ivalue != 32 && ivalue != 0)
		{
			printf("회문이 아닙니다\n");
			return;
		}
	}
	printf("회문입니다\n");
}

int abs(int num1, int num2)
{
	return num1 > num2 ? num1 - num2 : num2 - num1;
}

int main()
{
	char ch[256];
	scanf_s("%s", ch,256);
	Palindrome(ch);
}