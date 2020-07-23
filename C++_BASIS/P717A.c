#include<stdio.h>

int main(void)
{
	int count = 0, arr[10], i;

	printf("Input 10 integers: ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		if (i % 2 == 1 && arr[i] % 2 == 1)
		{
			count++;
		}
	}
	printf("\ncount=%d\n", count);
	for (i = 0; i < 10; i++)
	{
		if (i % 2 == 1 && arr[i] % 2 == 1)
		{
			printf("a[%d]=%d\n", i, arr[i]);
		}
	}
	return 0;
}