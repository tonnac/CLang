#include <stdio.h>

int main(void)
{
	char ch1[50];
	char ch2[50];
	char ch3[50];

	FILE * fp = fopen("mystory.txt", "wt");

	if (fp == NULL)
	{
		puts("파일열기 실패");
		return -1;
	}
	fputs("이름 입력 : ",stdout);fgets(ch1, 50, stdin);
	fputs("주민번호 입력 : ", stdout);fgets(ch2, 50, stdin);
	fputs("전화번호 입력 : ", stdout);fgets(ch3, 50, stdin);


	fputs("#이름: ", fp);
	fputs(ch1, fp);
	fputs("#주민번호: ", fp);
	fputs(ch2, fp);
	fputs("#전화번호: ", fp);
	fputs(ch3, fp);

	fclose(fp);
	return 0;
}