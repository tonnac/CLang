#ifndef STARTHEADER

#define STARTHEADER
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char Name[20];
	char TelNum[20];
}PHONEBOOK;

extern PHONEBOOK * pB;
extern int index;

#ifdef START
void Case1(void);
void Case2(void);
void Case3(void);
void Case4(void);
#endif

#endif