#include <stdio.h>

int main(void)
{
	int i = 0;
	int sum = 0;
	int k = 0;
	/*while (i < 5)
	{
		printf("���� �Է�: ");
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
			printf("%d ���� �Է�: ",i+1);
			scanf_s("%d", &k);
		}
		i++;
		sum += k;
		k = 0;
	}
	printf("%d\n", sum);
	return 0;
}