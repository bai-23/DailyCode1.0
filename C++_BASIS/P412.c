#include<stdio.h>
#define SIZE 10000

int main(void)
{
	int a1[SIZE], i, j, mid, count = 0;
	
	printf("Please input numbers: ");
	for (i = 0; i < SIZE; i++)
	{
		scanf("%d", &a1[i]);
		
		if (a1[i] == -222)
		{
			break;
		}
		count++;
	}
	for (j = 1; j < count; j++)
	{
		for (i = 0; i < count - j; i++)
		{
			if (a1[i] > a1[i + 1])
			{
				mid = a1[i];
				a1[i] = a1[i + 1];
				a1[i + 1] = mid;
			}
		}
	}
	printf("\nOutput:\n");
	for (i = 0; i < count; i++)
	{
		if ((i + 1) % 6 == 0 || i == count - 1)
		{
			printf("%-6d\n", a1[i]);
		}
		else
		{
			printf("%-6d,", a1[i]);
		}
	}
	return 0;
}
