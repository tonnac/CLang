#include <stdio.h>
#define SQUARE(X) X*X
#define SQUARE1(X) (X)*(X)
#define SQUARE2(X)  \
		((X)*(X))

int main(void)
{
	int num = 20;

	/* 정상적 결과 출력 */
	printf("SQUARE of num: %d\n", SQUARE(num));
	printf("SQUARE of -5: %d\n", SQUARE(-5));
	printf("SQUARE of 2.5: %3.2f\n", SQUARE(2.5));

	/* 비정상적 결과 출력 */
	printf("SQUARE of 3+2: %d\n", SQUARE1(3 + 2));
	printf("120/SQUARE(2) = %d\n", 120 / SQUARE2(2, 2));
	return 0;
}