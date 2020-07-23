#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
double Dp(int n1);

int main(void)
{
	int n;
	double fn;

	printf("Input n (13>=n>=2): ");
	scanf("%d", &n);

	fn = Dp(n);  /* userCode(<50字符): 调用函数计算fn */
	printf("\nf(%d)=%.0f\n", n, fn);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
double Dp(int n1)
{
	double f1[13] = {0, 1, 2};
	int i;

	for (i = 2; i < n1; i++)
	{
		f1[i + 1] = 2 * f1[i] + f1[i - 1] * f1[i - 2];
	}
	return f1[n1];
}