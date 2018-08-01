#include <stdio.h>

typedef struct
{
	char name[20];
	char stdnum[20];
	char school[20];
	char major[20];
	int year;
}Student;

void ShowStudentInfo(Student a)
{
	printf("학생 이름 : %s\n", a.name);
	printf("학생 번호 : %s\n", a.stdnum);
	printf("학생 학교 : %s\n", a.school);
	printf("선택 전공 : %s\n", a.major);
	printf("학년  : %d\n", a.year);
}

int main(void)
{
	Student b[7];
	for (int i = 0;i < 7;i++)
	{
		printf("이름: "), scanf("%s", b[i].name);
		printf("번호: "), scanf("%s", b[i].stdnum);
		printf("학교: "), scanf("%s", b[i].school);
		printf("전공: "), scanf("%s", b[i].major);
		printf("학년: "), scanf("%d", &b[i].year);getchar();
	}

	for (int i = 0;i < 7;i++)
		ShowStudentInfo(b[i]);
	return 0;
}