
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20] = "First~";
	char str2[20] = "Second";

	char str3[20] = "Simple num: ";
	char str4[20] = "1234567890";

	/**** CASE 1 ****/
	strcat_s(str1,sizeof(str1), str2);
	puts(str1);

	/**** CASE 2 ****/
	strncat_s(str3,sizeof(str3), str4,7);
	puts(str3);
}