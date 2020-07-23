#include<stdio.h>

int main(void)
{
	int num1, num2, num3;
	double num4, an;

	printf("请输入4个数：");
	scanf("%d%d%d%lf", &num1, &num2, &num3, &num4);
	an = num1 + (num2 % num3) * num4;
	printf("\n计算结果为：%013.5lf", an);
	return 0;
}