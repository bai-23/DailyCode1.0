#include<stdio.h>

int main(void)
{
	int x1;
	double Fx;

	printf("Please input x: ");
	scanf("%d", &x1);
	if (x1 < 0)
	{
		Fx = -5 * (double)x1 + 27;
	}
	else if (x1 == 0)
	{
		Fx = 7909;
	}
	else
	{
		Fx = 2 * (double)x1 - 1;
	}
	printf("\nF(%d) = %.0f\n", x1, Fx);
	return 0;	
}