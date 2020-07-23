#include<stdio.h>

int main(void)
{
	int arr[3][3], i, j;
	double sum = 0;

	
	printf("Please input the 3x3 Matrix:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
		}
		/*if (i == m1 -1 && j == m1 - 1)
		{
			break;
		}*/
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
		//	sum += arr[0][j] + arr[1][j] + arr[2][j];
			sum = sum + arr[i][j];
		}
	}
		printf("\nsum=%.0lf\n", sum);
	/*for (i = 0; i < m1; i++)
	{
		for (j = 0; j < m1; j++)
		{
			printf("%4d ", mm[i][j]);
			if (j == m1 - 1)
			{
				printf("\n");
			}
		}
	}*/
	return 0;
}