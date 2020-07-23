#include<stdio.h>

int main(void)
{
	int m1, n1, max, min;
	int i, gys, gbs;

	printf("please input two integer numbers: ");
	scanf("%d %d", &m1, &n1);
	
	if (m1 > n1)
	{
		max = m1;
		min = n1;
	}
	else
	{
		max = n1; 
		min = m1;
	}
	for (i = min; i >= 1; i--)
	{
		if (max % i == 0 && min % i == 0)
		{
			gys = i;
			break;
		}
	}	
	gbs = max * min / gys;
	printf("\nthe greatest common divisor is %d", gys);
	printf("\nthe least common multiple is %d\n", gbs);
	return 0;
}