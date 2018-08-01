#include <stdio.h>

typedef struct
{
	double rNum;
	double iNum;
}ComNum;

void ComPlus(ComNum b,ComNum a)
{
	double rN;
	double iN;
	rN = a.rNum + b.rNum;
	iN = a.iNum + b.iNum;
	printf("%f + %fi\n", rN, iN);
}

void ComMul(ComNum b, ComNum a)  //a*c + bci + adi - bd;
{
	double rN;
	double iN;
	rN = (a.rNum*b.rNum) - (a.iNum * b.iNum);
	iN = (a.iNum*b.rNum) + (a.rNum*b.iNum);
	printf("%f + %fi\n", rN, iN);
}

int main(void)
{
	double num1, num2;
	ComNum C1;
	ComNum C2;
	fputs("복소수 입력:[실수 허수]:", stdout);
	scanf_s("%lf %lf", &num1, &num2);
	C1.rNum = num1;
	C1.iNum = num2;
	fputs("복소수 입력:[실수 허수]:", stdout);
	scanf_s("%lf %lf", &num1, &num2);
	C2.rNum = num1;
	C2.iNum = num2;

	ComPlus(C1, C2);
	ComMul(C1, C2);

	return 0;
}