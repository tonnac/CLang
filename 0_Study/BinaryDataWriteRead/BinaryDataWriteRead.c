#define _CRT_SECURE_NO_WARNINGS
#define A 3
#define BSD
#ifdef ASD
#define WRITE
#ifdef WRITE

#include <stdio.h>
#include <string.h>


int main(void)
{
	FILE * fp = fopen("123.bin", "wb");
	if (fp == NULL)
	{
		puts("���Ͽ��� ����");
		return -1;
	}

	typedef struct
	{
		char ch[30];
		int age;
		int pay;
	}STRUCT;

	STRUCT arr[A];
	int i;
	int k = 52;

	for (i = 0;i < A;i++)
	{
		printf("�̸� �Է� :");scanf("%s", (*(arr + i)).ch);
		printf("���� �Է� :");scanf("%d", &(*(arr + i)).age);
		printf("�޿� �Է� :");scanf("%d", &(*(arr + i)).pay);
	}

	fwrite((void*)&k, sizeof(int), 1, fp);
	for (i = 0;i < A;i++)
	{
		fwrite((void*)&arr[i], sizeof(arr[i]), 1, fp);
	}
	if (feof != 0)
		puts("�Ϸ�!");

	fclose(fp);
	return 0;
}

#else

#include <stdio.h>

int main(void)
{
	typedef struct
	{
		char ch[30];
		int age;
		int pay;
	}STRUCT;

	STRUCT brr[A];
	int i;
	int k;

	FILE * fp = fopen("123.bin", "rb");

	if (fp == NULL)
	{
		puts("���Ͽ��� ����");
		return -1;
	}

	fread((void*)&k, sizeof(int), 1, fp);

	for (i = 0;i < A;i++)
	{
		fread((void*)&brr[i], sizeof(STRUCT), 1, fp);
	}

	if (feof != 0)
	{
		puts("�����б� �Ϸ�!");
	}

	for (i = 0;i < A;i++)
	{
		printf("%s %d %d\n", brr[i].ch, brr[i].age, brr[i].pay);
	}
	printf("%d\n", k);

	fclose(fp);
	return 0;
}

#endif
#endif

#ifdef BSD

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE * fp = fopen("BinaryDataWriteRead.c", "r");
	int i, j, n;
	char * LoadCh;
	n = 0;
	fseek(fp, 0, SEEK_END);
	i = ftell(fp);
	printf("������ ũ��� %d����Ʈ.\n", i);
	fseek(fp, 0, SEEK_SET);
	while (!feof(fp))
	{
		printf("%03X : ", ftell(fp));
		LoadCh = (char*)calloc(256, sizeof(char));
		for (i = 0;i < 256;i++)
		{
			LoadCh[i] = fgetc(fp);
		}
		for (j = 255; j >= 0; j--)
		{
			putchar(LoadCh[j]);
		}
		n++;
		if (!(n % 5))
		{
			puts("�ƹ�Ű�� ��������.");
			getch();
		}
	}

	free(LoadCh);
	fclose(fp);
	return 0;
}


#endif