#include<stdio.h>

int main(void)
{
	int i, a1[10];
	int sum1 = 0, sum2 = 0, sum3 = 0;

	printf("Input 10 integers: ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a1[i]);
	}
	for (i = 0; i < 10; i++)
	{
		if (a1[i] > 0)
		{
			sum1 = sum1 + a1[i];
		}
		if (a1[i] < 0)
		{
			sum2 = sum2 + a1[i];
		}	
	}
	
	for (i = 0; i < 10; i++)
	{
		sum3 = sum3 + a1[i];
	}
	printf("\nzhengshu=%d,fushu=%d,all=%d", \
		sum1, sum2, sum3);
	return 0;
}