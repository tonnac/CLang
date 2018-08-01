#include <stdio.h>

int main(void)
{
	int i = 0;
	int sum = 0;
	int k = 0;
	/*while (i < 5)
	{
		printf("숫자 입력: ");
		scanf_s("%d", &k);
		while (k >= 1)
		{
			sum += k;
			i++;
			k = 0;
		}
	}
	printf("%d\n", sum);*/

	while (i < 5)
	{
		while (k < 1)
		{
			printf("%d 숫자 입력: ",i+1);
			scanf_s("%d", &k);
		}
		i++;
		sum += k;
		k = 0;
	}
	printf("%d\n", sum);
	return 0;
}