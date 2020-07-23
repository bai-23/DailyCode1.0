#include<stdio.h>

int main(void)
{
	double aa, bb, ans;

	printf("Input 2 numbers: ");
	scanf("%lf %lf", &aa, &bb);
	if (bb != 0)
	{
		ans = aa / bb;
		printf("\nThe result is: %.2lf", ans);
	}
	else
	{
		printf("\nDivid by zero");
	}
	return 0;
}