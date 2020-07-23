/*#include<stdio.h>

int main(void)
{
	int arr[20][20], i, j, m1;
	int max, maxi, maxj;

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
	max = arr[0][0];
	for (i = 0; i < m1; i++)
	{
		for (j = 0; j < m1; j++)
		{
			if (max <= arr[i][j])
			{
				max = arr[i][j];
				maxi = i;
				maxj = j;
			}
		}
	}
	printf("\nmax=%d,i=%d,j=%d\n", max, maxi, maxj);
	
	return 0;
}*/

#include<stdio.h>

int main(void)
{
	int arr[21][21], i, j, max, m, maxi, maxj;

	printf("Please input m: ");
	scanf("%d", &m);
	printf("\nPlease input array:\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	max = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
				maxi = i;
				maxj = j;
			}
		}
	}
	printf("\nmax=%d,i=%d,j=%d\n", max, maxi, maxj);
	return 0;
}