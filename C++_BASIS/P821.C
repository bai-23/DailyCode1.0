#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
double Ans(int n1, int x1);

int main(void)
{
	double Pnx;
	int n, x;

	printf("please input n, x: ");
	scanf("%d,%d", &n, &x);

	Pnx = Ans(n, x);  /* userCode(<50字符): 调用函数计算Pn(x) */
	printf("\nThe answer is %.6f.\n", Pnx);
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

double Ans(int n1, int x1)
{
	double Pn;

	if (n1 == 0)
	{
		Pn = 1;
	}
	else if (n1 == 1)
	{
		Pn = x1;
	}
	else
	{
		Pn = ((2 * n1 - 1) * x1 * (Ans(n1 - 1, x1)) - (n1 - 1) * Ans(n1 - 2, x1)) / n1;
	}
	return Pn;
}

