#include <stdio.h>

int main(void)
{
	FILE * fp = fopen("mystory.txt", "at");
	if (fp == NULL)
	{
		puts("ÆÄÀÏ¿­±â ½ÇÆĞ");
		return -1;
	}
	char * ch1 = "#Áñ°Ü¸Ô´Â À½½Ä:Â«»Í,ÅÁ¼öÀ°\n";
	char * ch2 = "#Ãë¹Ì: Ãà±¸\n";

	fputs(ch1, fp);
	fputs(ch2, fp);

	fclose(fp);
	return 0;
}