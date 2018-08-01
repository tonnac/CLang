#include <stdio.h>

//#define QUESTION_1
//#define QUESTION_2
//#define QUESTION_3
#define QUESTION_4

int main()
{
#ifdef QUESTION_1
	int arr[5] = { 1,2,3,4,5 };
	int * ptr = arr;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		*(ptr++) += 2;
	}
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		printf("%d ", arr[i]);
	}
	puts("");
#endif
#ifdef QUESTION_2
	int arr[5] = { 1,2,3,4,5 };
	int * ptr = arr;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		*(ptr+i) += 2;
	}
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		printf("%d ", *(ptr+i));
	}
	puts("");
#endif
#ifdef QUESTION_3
	int arr[] = { 1,2,3,4,5 };
	int total = 0;
	int * ptr = (arr + 4);
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		total += *(ptr--);
	}
	printf("%d\n", total);
#endif
#ifdef QUESTION_4
	int arr[] = { 1,2,3,4,5,6 };
	int *fptr = arr;
	int *lptr = arr + 5;
	for (int i = 0; i < (sizeof(arr) / sizeof(int)) / 2; i++)
	{
		int temp = *(fptr+i);
		*(fptr + i) = *(lptr-i);
		*(lptr-i) = temp;
	}
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		printf("%d ", arr[i]);
	}
#endif
	return 0;
}