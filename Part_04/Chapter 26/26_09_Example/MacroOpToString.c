#include <stdio.h>
#define STRING_JOB(A, B) #A"�� ������ "#B"�Դϴ�."
#define STRING_JOB1(A, B) "A�� ������ B�Դϴ�."

int main(void)
{
	printf("%s\n", STRING_JOB(�̵���, ������));
	printf("%s\n", STRING_JOB1(�ѻ��, ��ɲ�));
	return 0;
}