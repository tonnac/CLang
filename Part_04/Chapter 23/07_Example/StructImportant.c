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
	printf("�л� �̸� : %s\n", a.name);
	printf("�л� ��ȣ : %s\n", a.stdnum);
	printf("�л� �б� : %s\n", a.school);
	printf("���� ���� : %s\n", a.major);
	printf("�г�  : %d\n", a.year);
}

int main(void)
{
	Student b[7];
	for (int i = 0;i < 7;i++)
	{
		printf("�̸�: "), scanf("%s", b[i].name);
		printf("��ȣ: "), scanf("%s", b[i].stdnum);
		printf("�б�: "), scanf("%s", b[i].school);
		printf("����: "), scanf("%s", b[i].major);
		printf("�г�: "), scanf("%d", &b[i].year);getchar();
	}

	for (int i = 0;i < 7;i++)
		ShowStudentInfo(b[i]);
	return 0;
}