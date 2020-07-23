#include<stdio.h>

int main(void)
{
	double f1, c1;

	printf("Input the degree: ");
	scanf("%lf", &f1);
	c1 = 5 * (f1 - 32) / 9;
	printf("\nF(%6.2lf)=C(%5.2lf)", f1, c1);
	return 0;
}