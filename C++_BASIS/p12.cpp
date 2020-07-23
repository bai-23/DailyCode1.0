#include<stdio.h>

int main(void)
{
	int a[3][3] = {{1, 2, 3}, {2}}, i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
			if (j == 2)
			{
				printf("\n");
			}
		}
	}
	return 0;
}