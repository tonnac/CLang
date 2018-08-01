#include <stdio.h>

int main(void)
{
	FILE * src = fopen("src.txt", "rt");
	FILE * des = fopen("des.txt", "wt");
	char str[3];

	if (src == NULL || des == NULL)
	{
		puts("���Ͽ��� ����");
		return -1;
	}

	while (fgets(str, sizeof(str), src) != NULL)
		fputs(str, des);
	
	if (feof(src) != 0)
		puts("���Ϻ��� �Ϸ�");
	else
		puts("���Ϻ��� ����");;

	fclose(src);
	fclose(des);

	return 0;
}