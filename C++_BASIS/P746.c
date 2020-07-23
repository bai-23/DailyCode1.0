#include<stdio.h>

int main(void)
{
	int aa[10], i, j, mid, count = 0;

	printf("please input 10 integer numbers: ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &aa[i]);
	}
	printf("\nthe array before sorted: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", aa[i]);
	}
	printf("\nthe array after  sorted: ");
	for (j = 0; j < 10; j++)
	{
		for(i = 0; i < 9 - j; i++)
		{
			if (aa[i] > aa[i + 1])
			{
				mid = aa[i];
				aa[i] = aa[i + 1];
				aa[i + 1] = mid;
			}
		}
		
		
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", aa[i]);
	}
	printf("\n");
	return 0;
}