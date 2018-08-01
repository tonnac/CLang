#include <stdio.h>

int main(void)
{
	FILE * src = fopen("copy.png", "rb");
	FILE * des = fopen("123.txt", "wb");
	char buf[20];
	int readCnt;

	if (src == NULL || des == NULL)
	{
		puts("���Ͽ��� ����");
		return -1;
	}

	while (1)
	{
		readCnt = fread((void*)buf, sizeof(char), sizeof(buf), src);

		if (readCnt < sizeof(buf))
		{
			if (feof(src) != 0)
			{
				fwrite((void*)buf, sizeof(char), readCnt, des);
				puts("���Ϻ��� �Ϸ�");
				break;
			}
			else
			{
				puts("���Ϻ��� ����");
				break;
			}

		}
		fwrite((void*)buf, sizeof(char), sizeof(buf), des);
	}

	fclose(src);
	fclose(des);

	return 0;
}