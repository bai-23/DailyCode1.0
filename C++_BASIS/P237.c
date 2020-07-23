#include<stdio.h>

int main(void)
{
	int mm[20][20], i, j, m1;
	double sum = 0;

	printf("Please input m: ");
	scanf("%d", &m1);
	printf("Please input array:\n");
	for (i = 0; i < m1; i++)
	{
		for (j = 0; j < m1; j++)
		{
			scanf("%d", &mm[i][j]);
		}
		if (i == m1 -1 && j == m1 - 1)
		{
			break;
		}
	}
	for (i = 0; i < m1; i++)
	{
		sum += mm[i][0] + mm[i][2] + mm[i][m1 - 1];
	}
	printf("\nSum = %.0lf\n", sum);
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