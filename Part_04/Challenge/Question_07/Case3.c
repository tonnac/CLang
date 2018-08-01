#include "StartMenu.h"
#include "Function.h"

void Case3(void)
{
	while (1)
	{
		int num;
		puts("[SEARCH]");
		puts("1.Search By Name");
		puts("2.Search By Tel Number");
		puts("3.Upper Menu");
		fputs("Choose the item: ", stdout);
		scanf("%d", &num);
		getchar();
		puts("");

		switch (num)
		{
		case 1:SearchByName();break;
		case 2:SearchByNum();break;
		case 3:puts("");return;
		default:
			puts("유효하지 않은 값\n");
		}
	}
}