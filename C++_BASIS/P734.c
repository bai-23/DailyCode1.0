#include<stdio.h>
#include<math.h>

int main(void)
{
	int n1, s1, c1;

	printf("Input a side of cube: ");
	scanf("%d", &n1);
	s1 = n1 * n1 * n1;
	c1 = n1 * n1 * 6;
	printf("\nThe volume of cube is %d,\
		the surface area of cube is %d.\n", s1, c1);
	return 0;
}