
#include<stdio.h>

int main(void)
{
	int arr[20][20], i, j, m1;
	int sum = 0;

	printf("Please input m: ");
	scanf("%d", &m1);
	printf("Please input array:\n");
	for (i = 0; i < m1; i++)
	{
		for (j = 0; j < m1; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < m1; i++)
	{
		for (j = 0; j < m1; j++)
		{
			if (i == 0 || j == 0 || i == m1 - 1 || j == m1 - 1)
			{
				sum += arr[i][j];
			}
		}
	}
	printf("\nsum=%d\n", sum);
	return 0;
}