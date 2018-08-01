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
		puts("도도도");return;
	case Re:
		puts("레레레");return;
	case Mi:
		puts("미미미");return;
	case Fa:
		puts("파파파");return;
	case Sol:
		puts("솔솔솔");return;
	case La:
		puts("라라라");return;
	case Ti:
		puts("시시시");return;
	}
}

int main(void)
{
	Syl d;

	for (d = Do; d <= Ti; d++)
		Sound(d);
	return 0;
}