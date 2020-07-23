#include<stdio.h>

int main(void)
{
	int a1, b1, c1, d1, max;

	printf("请输入4个整数: ");
	scanf("%d, %d, %d, %d", &a1, &b1, &c1, &d1);
	for (max = 0; max < a1 || max < b1 || max < c1 || max < d1; max++) 
	{
	
	}
	printf("\n最大的数是 %d\n", max);
	return 0;
}