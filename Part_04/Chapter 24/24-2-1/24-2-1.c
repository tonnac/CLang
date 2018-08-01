#include <stdio.h>

long Byte(FILE * a)
{
	long temp;
	long fpos;
	temp = ftell(a);
	fseek(a, 0, SEEK_END);
	fpos = ftell(a);
	fseek(a, temp, SEEK_SET);
	return fpos;
}

int main(void)
{
	long pos;
	FILE * fp = fopen("ee.txt", "wb");
	fprintf(fp, "%lld",8234324524545253);
	fclose(fp);

	fp = fopen("ee.txt", "rb");
	pos = Byte(fp);
	printf("%ld\n", pos);

	fclose(fp);
	return 0;
}