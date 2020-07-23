/*#include<stdio.h>

int main(void)
{
	int a1, i, n1;
	double res = 0, zz = 0;

	printf("Please input a,n: ");
	scanf("%d,%d", &a1, &n1);

	for (i = 1; i <= n1; i++)
	{
		zz = zz * 10 + a1;
		res = res + zz;
	}
	printf("\na+aa+...=%.0f\n", res);
	return 0;
}*/
#include<stdio.h>

int main(void)
{
	int i, a, n;
	double sum = 0, g = 0;
	
	scanf("%d,%d", &a, &n);
	for (i = 1; i <= n; i++)
	{
		g = g *10 + a;
		sum = sum + g;
	}
	printf("\na+aa+...=%.0f\n", sum);
	return 0;
}
