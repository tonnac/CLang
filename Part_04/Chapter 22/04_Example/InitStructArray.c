#include <stdio.h>

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void)
{
	struct person arr[3] = {
		{"���̻�","010-1111-1111",23},
		{"�����","010-2222-2222",44},
		{"ĥ�ȱ�","010-333-3333",55}
	};

	int i;
	for (i = 0;i < 3;i++)
		printf("%s %s %d\n", arr[i].name, arr[i].phoneNum, arr[i].age);
	return 0;
}