#include <stdio.h>

int main(void)
{
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("���� ch�� ũ��: %d\n", sizeof(ch));
	printf("���� inum�� ũ��: %d\n", sizeof(inum));
	printf("���� dnum�� ũ��: %d\n", sizeof(dnum));

	printf("char�� ũ��: %zd\n", sizeof(char));
	printf("short�� ũ��: %zd\n", sizeof(short));
	printf("int�� ũ��: %zd\n", sizeof(int));
	printf("long�� ũ��: %zd\n", sizeof(long));
	printf("long long�� ũ��: %zd\n", sizeof(long long));
	printf("float�� ũ��: %zd\n", sizeof(float));
	printf("double�� ũ��: %zd\n", sizeof(double));
	printf("long double�� ũ��: %zd\n", sizeof(long double));
	return 0;
}