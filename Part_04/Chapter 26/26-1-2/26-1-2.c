#include <stdio.h>
#define PI 3.14
#define AREA(R) (((R)*(R))*(PI))

int main(void)
{
	double rad;
	printf("������ �Է� : ");
	scanf_s("%lf", &rad);

	printf("������ %g�� ���� ����: %f\n", rad, AREA(rad));
	return 0;
}