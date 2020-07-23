#include<stdio.h>

int main(void)
{
	double x1, y1, as;
	int z1;

	printf("please input x,y,z: ");
	scanf("%lf, %lf, %d", &x1, &y1, &z1);
	as = x1 + z1 % 3 * (int)(x1 + y1) % 2 / 4;
	printf("\nResult = %.6lf", as);
	return 0;
}