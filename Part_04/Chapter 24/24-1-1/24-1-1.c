#include <stdio.h>

int main(void)
{
	char ch1[50];
	char ch2[50];
	char ch3[50];

	FILE * fp = fopen("mystory.txt", "wt");

	if (fp == NULL)
	{
		puts("���Ͽ��� ����");
		return -1;
	}
	fputs("�̸� �Է� : ",stdout);fgets(ch1, 50, stdin);
	fputs("�ֹι�ȣ �Է� : ", stdout);fgets(ch2, 50, stdin);
	fputs("��ȭ��ȣ �Է� : ", stdout);fgets(ch3, 50, stdin);


	fputs("#�̸�: ", fp);
	fputs(ch1, fp);
	fputs("#�ֹι�ȣ: ", fp);
	fputs(ch2, fp);
	fputs("#��ȭ��ȣ: ", fp);
	fputs(ch3, fp);

	fclose(fp);
	return 0;
}