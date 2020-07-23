#include<stdio.h>

int main(void)
{
	int m1, i, j;
	int sum, aa[20][20];

	printf("Please input m: ");
	scanf("%d", &m1);
	printf("Please input array:\n");
	for (j = 0; j < m1; j++)
	{
		for (i = 0; i < m1; i++)
		{
			scanf("%d", &aa[j][i]);
			if (i == m1 - 1)
			{
				break;
			}
		}
		if (j == m1 - 1)
		{
			break;
		}

	}
	if (m1 % 2 == 0)
	{
		for (j = 0, sum = 0; j < m1; j++)
		{
			sum += aa[j][j];
		}
		for (j = 0, i = m1; j < m1; j++)
		{
			sum += aa[j][i - 1];
			i--;
		}
	}
	else 
	{
		for (j = 0, sum = 0; j < m1; j++)
		{
			sum += aa[j][j];
		}
		for (j = 0, i = m1; j < m1; j++)
		{
			sum += aa[j][i - 1];
			i--;
		}
		sum -= aa[(m1 - 1) / 2][(m1 - 1) / 2];
	}
	printf("\nsum=%d\n", sum);
	return 0;
}