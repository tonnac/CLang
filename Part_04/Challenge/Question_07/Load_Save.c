#include "StartMenu.h"

void Load(void)
{
	FILE * fp = fopen("Data.bin", "rb");
	char ch;
	if (fp == NULL)
	{
		puts("파일열기 실패");
	}

	fread((void*)&index, sizeof(int), 1, fp);
	pB = (PHONEBOOK*)realloc(pB, sizeof(PHONEBOOK)*(index+1));
	for (int i = 0;i < index;i++)
	{
		fread((void*)&pB[i], sizeof(PHONEBOOK), 1, fp);
	}
	
	while (1)
	{
		if (feof(fp))
		{
			puts("불러오기 완료.");
			break;
		}
		ch = fgetc(fp);
	}
	fclose(fp);
}


void Save(void)
{
	FILE * fp = fopen("Data.bin", "wb");

	if (fp == NULL)
	{
		puts("파일열기 실패");
	}
	
	fwrite((void*)&index, sizeof(int), 1, fp);
	for (int i = 0;i < index;i++)
	{
		fwrite((void*)&pB[i], sizeof(PHONEBOOK), 1, fp);
	}

	puts("저장 완료.");


	free(pB);
	fclose(fp);
}