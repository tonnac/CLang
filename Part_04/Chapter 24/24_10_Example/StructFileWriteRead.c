#include <stdio.h>


int main(void)
{
	typedef struct
	{
		char name[10];
		char sex;
		int age;
	}Friend;

	FILE * fp;
	Friend f1;
	Friend f2;

	/***** FILE WRITE *****/
	fp = fopen("friend.bin", "wb");
	printf("�̸� ���� ���� �� �Է�: ");
	scanf("%s %c %d", f1.name, &(f1.sex), &(f1.age));
	fwrite((void*)&f1, sizeof(Friend), 1, fp);
	fclose(fp);

	/***** FILE READ *****/
	fp = fopen("friend.bin", "rb");
	fread((void*)&f2, sizeof(Friend), 1, fp);
	printf("%s %c %d\n", f2.name, f2.sex, f2.age);
	fclose(fp);

	return 0;
}