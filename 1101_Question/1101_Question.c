#include <stdio.h>

//#define QUESTION_1
#define QUESTION_2

#ifdef QUESTION_1
int arrayMaxvalue(int arr[], int len)
{
	int Max = arr[0];
	for (int i = 0; i < len; i++)
	{
		if (arr[i] > Max)
			Max = arr[i];
	}
	return Max;
}
int arrayMinvalue(int arr[], int len)
{
	int Min = arr[0];
	for (int i = 0; i < len; i++)
	{
		if (arr[i] < Min)
			Min = arr[i];
	}
	return Min;
}
#endif

int main()
{
#ifdef QUESTION_1
	int arr[5];
	int total = 0;
	for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
	{
		scanf_s("%d", &arr[i]);
		total += arr[i];
	}
	printf("최대값:%d\n", arrayMaxvalue(arr,sizeof(arr)/sizeof(int)));
	printf("최소값:%d\n", arrayMinvalue(arr, sizeof(arr) / sizeof(int)));
	printf("총합:%d\n", total);
#endif
#ifdef QUESTION_2
	char ch[] = { 'G','o','o','d',' ','t','i','m','e' };
	for (int i = 0; i < sizeof(ch) / sizeof(char);i++)
	{
		printf("%c", ch[i]);
	}
	puts("");
#endif
	return 0;
}