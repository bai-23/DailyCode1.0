#include<stdio.h>
#include<math.h>

int main(void)
{
	double p1, a1, c1, p2;

	printf("Input a side of triangle: ");
	scanf("%lf", &p1);
	c1 = p1 * 3;
	p2 = c1 / 2;
	a1 = sqrt(p2 * (p2 - p1) * (p2 - p1) * (p2 - p1));
	printf("\nThe area of triangle is %.2f, the circle of triangle is %2.0f\n", a1, c1);
	return 0;
}

