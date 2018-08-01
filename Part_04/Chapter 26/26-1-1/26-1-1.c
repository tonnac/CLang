#include <stdio.h>

#define PLUS(X,Y,Z) ((X)+(Y)+(Z))
#define MULTI(X,Y,Z) ((X)*(Y)*(Z))

int main(void)
{
	int num1, num2, num3;
	printf("¼¼°³ÀÇ Á¤¼ö ÀÔ·Â :");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("¼¼ ¼öÀÇ µ¡¼À : %d\n", PLUS(num1, num2, num3));
	printf("¼¼ ¼öÀÇ °ö¼À : %d\n", MULTI(num1, num2, num3));

	return 0;
}