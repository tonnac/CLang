#include <stdio.h>
#define PI 3.14
#define PRODUCT(X,Y) ((X)*(Y))
#define CIRCLE_AREA(R) ((PRODUCT((R),(R)))*(PI))

int main(void)
{
	double rad = 2.1;
	printf("������ %g�� ���� ���� : %2.3f\n",rad, CIRCLE_AREA(rad));
	return 0;
}