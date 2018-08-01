#include <stdio.h>

typedef enum syllable
{
	Do = 1, Re = 2, Mi = 3, Fa = 4, Sol = 5, La = 6, Ti = 7
}Syl;

void Sound(Syl a)
{
	switch (a)
	{
	case Do:
		puts("������");return;
	case Re:
		puts("������");return;
	case Mi:
		puts("�̹̹�");return;
	case Fa:
		puts("������");return;
	case Sol:
		puts("�ּּ�");return;
	case La:
		puts("����");return;
	case Ti:
		puts("�ýý�");return;
	}
}

int main(void)
{
	Syl d;

	for (d = Do; d <= Ti; d++)
		Sound(d);
	return 0;
}