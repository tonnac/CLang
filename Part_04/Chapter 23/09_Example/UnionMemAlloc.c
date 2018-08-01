#include <stdio.h>

typedef struct
{
	int mem1;
	int mem2;
	double mem3;
} SBox;

typedef union
{
	int mem1;
	int mem2;
	double mem3;
} UBox;

int main(void)
{
	SBox sbx;
	UBox ubx;
	printf("%X %X %X\n", &sbx.mem1, &sbx.mem2, &sbx.mem3);
	printf("%X %X %X\n", &ubx.mem1, &ubx.mem2, &ubx.mem3);
	printf("%d %d\n", sizeof(sbx), sizeof(ubx));
	return 0;
}