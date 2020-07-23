#include<stdio.h>

#define T 3.14

int main(void)
{
	double r1, c1, s1, v1;
	int h1;

	printf("Input: ");
	scanf("r=%lf, h=%d", &r1, &h1);
	c1 = 2 * T * r1;
	s1 = T * r1 * r1;
	v1 = T * r1 * r1 * h1;
	printf("\nc1 = %4.2lf \ns1 = %4.2lf \nv1 = %5.2lf", c1, s1, v1);
	return 0;
}
