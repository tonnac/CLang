#include "StartMenu.h"
#include "Function.h"

void ClearEnter(void)
{
	size_t a, b;
	a = strlen(pB[index].Name);
	b = strlen(pB[index].TelNum);

	pB[index].Name[a - 1] = 0;
	pB[index].TelNum[b - 1] = 0;

}
void DeleteByName(void)
{
	char ch[20];
	fputs("Input Name:", stdout);
	fgets(ch, sizeof(ch), stdin);
	ch[strlen(ch) - 1] = 0;

	for (int i = 0;i < index;i++)
	{
		if (strlen(ch) == strlen(pB[i].Name))
		{
			if (!strcmp(ch, pB[i].Name))
			{
				for (int j = i;j < index-1;j++)
				{
					pB[j] = pB[j + 1];
				}
				index--;
				puts("������ �Ϸ�ƽ��ϴ�.\n");
				return;
			}
		}
	}
	puts("�ش��ϴ� �̸��� �������� �ʽ��ϴ�.\n");
}
void DeleteByNum(void)
{
	char ch[20];
	fputs("Input Num:", stdout);
	fgets(ch, sizeof(ch), stdin);
	ch[strlen(ch) - 1] = 0;

	for (int i = 0;i < index;i++)
	{
		if (strlen(ch) == strlen(pB[i].TelNum))
		{
			if (!strcmp(ch, pB[i].TelNum))
			{
				for (int j = i;j < index - 1;j++)
				{
					pB[j] = pB[j + 1];
				}
				index--;
				puts("������ �Ϸ�ƽ��ϴ�.\n");
				return;
			}
		}
	}
	puts("�ش��ϴ� ��ȣ�� �������� �ʽ��ϴ�.\n");
}
void SearchByName(void)
{
	char ch[20];
	fputs("Input Name:", stdout);
	fgets(ch, sizeof(ch), stdin);
	ch[strlen(ch) - 1] = 0;

	for (int i = 0;i < index;i++)
	{
		if (strlen(ch) == strlen(pB[i].Name))
		{
			if (!strcmp(ch, pB[i].Name))
			{
				printf("Name:%-3s      Tel:%3s\n\n", pB[i].Name, pB[i].TelNum);
				return;
			}
		}
	}
	puts("�ش��ϴ� �̸��� �������� �ʽ��ϴ�.\n");
}
void SearchByNum(void)
{
	char ch[20];
	fputs("Input Num:", stdout);
	fgets(ch, sizeof(ch), stdin);
	ch[strlen(ch) - 1] = 0;

	for (int i = 0;i < index;i++)
	{
		if (strlen(ch) == strlen(pB[i].TelNum))
		{
			if (!strcmp(ch, pB[i].TelNum))
			{
				printf("Name:%-3s      Tel:%3s\n", pB[i].Name, pB[i].TelNum);
				return;
			}
		}
	}
	puts("�ش��ϴ� ��ȣ�� �������� �ʽ��ϴ�.\n\n");
}
