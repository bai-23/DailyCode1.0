#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
long int Ans(int n1);

int main(void)
{
	int n;
	long int Fn;
	
	printf("Please input a number: ");
	scanf("%d", &n);
	
	Fn = Ans(n);  /* userCode(<50字符): 调用函数计算f(n) */
	printf("\nf(%d) = %ld\n", n, Fn);
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

long int Ans(int n1)
{
	long ans;
	
	if (n1 > 1)
	{
		ans = 2 * Ans(n1 / 2) + n1;
	}
	if (n1 == 1)
	{
		ans = 1;
	}
	if (n1 < 1)
	{
		ans = 0;
	}
	return ans;
}

