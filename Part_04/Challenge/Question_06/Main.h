#ifndef MAIN

#define MAIN

#include <stdlib.h>

typedef struct
{
	char Name[20];
	char TelNum[20];
}PHONEBOOK;

PHONEBOOK * pB;
int index = 0;

void StartMenu(void);

#endif