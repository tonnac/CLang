#include <stdio.h>

//#define QUESTION_1
//#define QUESTION_2
//#define QUESTION_3
//#define QUESTION_4
#define QUESTION_5

int main()
{
#ifdef QUESTION_1
	int * arr1[5];
	int * arr2[3][5];

	int **pptr = arr1;
	int *(*pptr1)[5] = arr2;
#endif
#ifdef QUESTION_2
	int ** ptr;
	int *(*pptr)[5];
	int ***pptr2;
	int ***(*p3e)[5];
#endif
#ifdef QUESTION_3
#endif
#ifdef QUESTION_4
#endif
#ifdef QUESTION_5
	int arr[2][2][2];
	arr[1][0][1] = 39;
	printf("%d\n", arr[1][0][1]);
	printf("%d\n", (*(arr + 1))[0][1]);
	printf("%d\n", (*(*(arr + 1)) + 0)[1]);
	printf("%d\n", (*(*(*(arr + 1) + 0) + 1)));
	printf("%d\n", *(*(arr + 1)[0] + 1));
	printf("%d\n", (*(arr[1] + 0))[1]);
	printf("%d\n", *(*(arr[1] + 0) + 1));
	printf("%d\n", *(arr[1][0] + 1));
#endif
	return 0;
}