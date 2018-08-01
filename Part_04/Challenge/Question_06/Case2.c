#include "Function.h"
#include "StartMenu.h"

void Case2(void)
{
	while (1)
	{
		int num;
		puts("[DELETE]");
		puts("1.Delete By Name");
		puts("2.Delete By Tel Number");
		puts("3.Upper Menu");
		fputs("Choose the item: ", stdout);
		scanf("%d", &num);
		getchar();
		puts("");

		switch (num)
		{
		case 1:DeleteByName();break;
		case 2:DeleteByNum();break;
		case 3:puts("");return;
		default:
			puts("유효하지 않은 값\n");
		}
	}
}