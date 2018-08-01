#include <stdio.h>

int main()
{
	size_t iSecond;
	size_t iHour;
	size_t iMin;
	size_t tSecond;
	scanf_s("%lld", &iSecond);

	iHour = iSecond / 3600;
	iSecond = iSecond - (iHour * 3600);
	iMin = iSecond / 60;
	iSecond = iSecond - (iMin * 60);
	tSecond = iSecond;

	printf("[h:%lld, m:%lld, s:%lld]\n", iHour, iMin, tSecond);

	return 0;

}