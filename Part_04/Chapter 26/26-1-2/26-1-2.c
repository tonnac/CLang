#include <stdio.h>
#define PI 3.14
#define AREA(R) (((R)*(R))*(PI))

int main(void)
{
	double rad;
	printf("반지름 입력 : ");
	scanf_s("%lf", &rad);

	printf("반지름 %g인 원의 넓이: %f\n", rad, AREA(rad));
	return 0;
}