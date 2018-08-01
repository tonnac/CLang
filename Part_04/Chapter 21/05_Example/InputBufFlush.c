#include <stdio.h>

void ClearLine(void)
{
	while (getchar() != '\n');
}

int main(void)
{
	char perID[7];
	char name[10];

	fputs("주민번호 앞 6자리 입력: ", stdout);
	fgets(perID, sizeof(perID), stdin);
	ClearLine();

	fputs("이름 입력: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("주민번호: %s \n", perID);
	printf("이름 : %s \n", name);
	return 0;
}