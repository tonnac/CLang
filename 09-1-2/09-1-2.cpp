#include <stdio.h>

double CelToFah(double Fah)
{
	double Cel = (Fah - 32) / 1.8;
	return Cel;
}

double FahToCel(double Cel)
{
	double Fah = 1.8*Cel + 32;
	return Fah;
}

int main(void)
{
	printf("%.2f %.2f\n", FahToCel(36), CelToFah(FahToCel(36)));

	return 0;
}