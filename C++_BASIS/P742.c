
#include<stdio.h>

int main(void)
{
	int a1[5], i, b1[5], j, sum;
	
	printf("Input A: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a1[i]);
	}
	printf("Input B: ");
	for (j = 0; j < 5; j++)
	{
		scanf("%d", &b1[j]);
	}
	sum = a1[0] * b1[4] + a1[1] * b1[3] + a1[2] * b1[2] \
		+ a1[3] * b1[1] + a1[4] * b1[0];
	printf("\nsum=%d\n", sum);
	return 0;
}