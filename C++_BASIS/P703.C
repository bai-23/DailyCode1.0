#include<stdio.h>

int main(void)
{
	int ss;
	double ti;

	printf("Input  profit: ");
	scanf("%d", &ss);
	if (ss <= 1000)
	{
		ti = 500;
	}
	if (ss > 1000 && ss <= 2000)
	{
		ti = 500 + ss * 0.1;
	}
	if (ss > 2000 && ss <= 5000)
	{
		ti = 500 + ss * 0.15;
	}
	if (ss > 5000 && ss <=10000)
	{
		ti = 500 + ss * 0.2;
	}
	if (ss > 10000)
	{
		ti = 500 + ss * 0.25;
	}
	printf("\nsalary=%.2lf\n", ti);
	return 0;
}