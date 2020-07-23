#include<stdio.h>

int main(void)
{
	int num1, num2, num4;
	double num3, a1;

	printf("请输入4个数：");
	scanf("%d%d%lf%d", &num1, &num2, &num3, &num4);
	a1 = (num1 % num2) * num3 + num4;
	printf("\n计算结果为：%016.7lf", a1);
	return 0;
}

