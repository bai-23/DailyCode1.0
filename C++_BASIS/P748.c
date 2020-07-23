#include<stdio.h>

int main(void)
{
	int arr[14][14], i, j, n1;
	int sum1 = 0, sum2 = 0;

	printf("Enter n: ");
	scanf("%d", &n1);
	printf("Please input array:\n");
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < n1; j++)
		{
			arr[i][j] = (i + j) * n1;
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < n1; j++)
		{
			if (i != 0 && j != 0 && i != n1 - 1 && j != n1 - 1)
			{
				sum1 += arr[i][j];
			}
			if (i == j)
			{
				sum2 += arr[i][j];
			}
		}
	}
	printf("\nsum1=%d\nsum2=%d\n", sum1, sum2);
	return 0;
}