#include "StartMenu.h"

void Case4(void)
{
	int i;
	puts("[PRINT ALL DATA]");
	for (i = 0;i < index;i++)
	{
		printf("Name:%-3s      Tel:%3s\n", pB[i].Name, pB[i].TelNum);
	}
	puts("");
}