#include <stdio.h>

int main(void)
{
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("변수 ch의 크기: %d\n", sizeof(ch));
	printf("변수 inum의 크기: %d\n", sizeof(inum));
	printf("변수 dnum의 크기: %d\n", sizeof(dnum));

	printf("char의 크기: %zd\n", sizeof(char));
	printf("short의 크기: %zd\n", sizeof(short));
	printf("int의 크기: %zd\n", sizeof(int));
	printf("long의 크기: %zd\n", sizeof(long));
	printf("long long의 크기: %zd\n", sizeof(long long));
	printf("float의 크기: %zd\n", sizeof(float));
	printf("double의 크기: %zd\n", sizeof(double));
	printf("long double의 크기: %zd\n", sizeof(long double));
	return 0;
}