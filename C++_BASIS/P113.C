#include<stdio.h>

int main(void)
{
	int in, ye;
	double out;

	printf("Please input benjin,cunqi: ");
	scanf("%d,%d", &in, &ye);
	if (ye == 1)
	{
		out = in * 0.0315;
		printf("\nlixi = %.2lf yuan", out);
	}
	else if (ye == 2)
	{
		out = in * 0.0363 * 2;
		printf("\nlixi = %.2lf yuan", out);
	}
	else if (ye == 3)
	{
		out = in * 0.0402 * 3;
		printf("\nlixi = %.2lf yuan", out);
	}
	else if (ye == 5)
	{
		out = in * 0.0469 * 5;
		printf("\nlixi = %.2lf yuan", out);
	}
	else if (ye == 8)
	{
		out = in * 0.0536 * 8;
		printf("\nlixi = %.2lf yuan", out);
	}
	return 0;
}