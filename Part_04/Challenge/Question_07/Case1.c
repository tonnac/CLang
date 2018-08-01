#include "StartMenu.h"
#include "Function.h"



void Case1(void)
{
	pB = (PHONEBOOK*)realloc(pB,sizeof(PHONEBOOK)*(index + 1));
	puts("[INSERT]");
	fputs("Input Name:",stdout);
	fgets(pB[index].Name, sizeof(pB[index].Name), stdin);
	fputs("Input Tel Number:",stdout);
	fgets(pB[index].TelNum, sizeof(pB[index].TelNum), stdin);
	ClearEnter();
	index++;
	printf("		 Data Inserted\n\n");
//	printf("%s %s %d\n", pB[index - 1].Name, pB[index - 1].TelNum, index);
}