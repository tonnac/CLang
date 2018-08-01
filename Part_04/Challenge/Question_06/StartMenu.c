#define START
#include "StartMenu.h"


void StartMenu(void)
{
	while (1)
	{
		int Select;
		puts("***** MENU *****");
		puts("1.Insert");
		puts("2.Delete");
		puts("3.Search");
		puts("4.Print All");
		puts("5.Exit");
		fputs("Choose the item: ", stdout);
		scanf("%d", &Select);
		getchar();
		puts("");
		switch (Select)
		{
		case 1:Case1();break;
		case 2:Case2();break;
		case 3:Case3();break;
		case 4:Case4();break;
		case 5:return;
		default:
			puts("유효하지 않은 값\n");
		}
	}
}