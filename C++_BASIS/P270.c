#include<stdio.h>

int main(void)
{
	double a1, b1, c1, max, mid, min;

	printf("请输入3个数：");
	scanf("%lf %lf %lf", &a1, &b1, &c1);
	if (a1 > b1 && b1 > c1)
	{
		max = a1;
		mid = b1;
		min = c1;
	}
	if (a1 > c1 && c1 > b1)
	{
		max = a1;
		mid = c1;
		min = b1;
	}
	if (b1 > a1 && a1 > c1)
	{
		max = b1;
		mid = a1;
		min = c1;
	}
	if (b1 > c1 && c1 > a1)
	{
		max = b1;
		mid = c1;
		min = a1;
	}
	if (c1 > a1 && a1 > b1)
	{
		max = c1;
		mid = a1;
		min = b1;	
	}
	if (c1 > b1 && b1 > a1)
	{
		max = c1;
		mid = b1;
		min = a1;
	}
	printf("\n这三个数由大到小为: %.2f   %.2f   %.2f\n", max, mid, min);
	return 0;
}