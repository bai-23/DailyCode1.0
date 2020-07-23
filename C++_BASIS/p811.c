#include <math.h>
#include <stdio.h>

/* userCode(<80字符): 自定义函数之原型声明 */
double Area(double a1, double a2, double a3);

int main(void)
{
	double bianA, bianB, bianC, mianJi;

	printf("please input triange sides: ");
	scanf("%lf,%lf,%lf", &bianA, &bianB, &bianC);

	if (bianA<0 || bianB<0 || bianC<0
			|| (bianA+bianB <= bianC) || (bianA+bianC <= bianB) || (bianB+bianC <= bianA))
	{
		printf("\ndata error\n");
	}
	else
	{
		mianJi = Area(bianA, bianB, bianC);  /* userCode(<50字符): 调用函数计算三角形面积 */
		printf("\narea=%.2f\n", mianJi);
	}

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

double Area(double a1, double a2, double a3)
{
	double s1, p1;

	p1 = (a1 + a2 + a3) / 2;
	s1 = sqrt(p1 * (p1 - a1) * (p1 - a2) * (p1 - a3));
	return s1;
}



