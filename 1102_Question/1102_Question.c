#include <stdio.h>

//#define QUESTION_1
//#define QUESTION_2
#define QUESTION_3

int main()
{
#ifdef QUESTION_1
	char ch[256];
	int idx = 0;
	scanf_s("%s", ch, 256);
	while (ch[idx++] != '\0');
	printf("±Ê¿Ã:%d\n", (idx -1));
#endif
#ifdef QUESTION_2
	char ch[256];
	int idx = 0;
	scanf_s("%s", ch, 256);
	while (ch[idx++] != '\0');
	idx -= 2;
	for (int i = 0; i < idx / 2; i++)
	{
		char temp = ch[i];
		ch[i] = ch[idx - i];
		ch[idx - i] = temp;
	}
	printf("%s\n", ch);
#endif
#ifdef QUESTION_3
	char ch[256];
	int idx = 0;
	scanf_s("%s", ch, 256);
	char max = ch[0];
	while (ch[idx++] != '\0');
	for (int i = 0; i < idx - 1; i++)
	{
		if (max < ch[i])
			max = ch[i];
	}
	printf("%c\n", max);
#endif
	return 0;
}