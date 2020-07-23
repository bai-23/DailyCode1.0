#include<stdio.h>
#include<math.h>

int main(void)
{
	double x1, ans;

	printf("«Î ‰»Îª°∂» x: ");
	scanf("%lf", &x1);
	ans = sin(x1);
	printf("\nSin(%.3lf) = %.5lf\n", x1, ans);
	return 0;
}