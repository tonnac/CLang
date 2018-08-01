#include "Main.h"
#include "Load_Save.h"

int main(void)
{
	pB = (PHONEBOOK*)malloc(sizeof(PHONEBOOK));
	Load();
	StartMenu();
	Save();
	return 0;
}