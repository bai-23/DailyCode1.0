#include<stdio.h>
#include<math.h>

int main(void)
{
	int a1, a2, a3, max;

	printf("Input 3 numbers: ");
	scanf("%d, %d, %d", &a1, &a2, &a3);
	if (fabs(a1) > fabs(a2))
	{
		max = a1;
	}
	else
	{
		max = a2;
	}
	if (fabs(a2) > fabs(a3))
	{
		max = a2;
	}
	else
	{
		max = a3;
	}
	if (fabs(a1) > fabs(a3))
	{
		max = a1;
	}
	else
	{
		max = a3;
	}
	printf("\nThe number with maximum absolute value is %d.\n", max);
	return 0;
}