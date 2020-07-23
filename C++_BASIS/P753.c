#include<stdio.h>

int main(void)
{
	double x1, ans = 1;
	int y1, i;

	printf("Input x, y: ");
	scanf("%lf,%d", &x1, &y1);
	if (y1 > 0)
	{
		for (i = 1; i <= y1; i++)
		{
			ans = ans * x1;
		}
	}
	if (y1 == 0)
	{
		ans = 1;
	}
	if (y1 < 0)
	{
		for (i = 1; i <= -y1; i++)
		{
			ans = ans * x1;			
		}
		ans = (int)1 / ans;
	}
	printf("\nResult: %.6lf^%d=%.6lf\n", x1, y1, ans);
	return 0;
}