#include <stdio.h>

typedef struct
{
	char name[20];
	char phoneNum[20];
	int age;
}Person;

void ShowPersonInfo(Person a)
{
	printf("name: %s\n", a.name);
	printf("phone: %s\n", a.phoneNum);
	printf("age: %d\n", a.age);
}

Person ReadPersonInfo(void)
{
	Person a;
	printf("name? ");scanf("%s", a.name);
	printf("phone? ");scanf("%s", a.phoneNum);
	printf("age? ");scanf("%d", &a.age);
	return a;
}

int main(void)
{
	Person a = ReadPersonInfo();
	ShowPersonInfo(a);
	return 0;
}