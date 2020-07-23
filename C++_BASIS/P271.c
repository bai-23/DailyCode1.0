#include<stdio.h>

int main(void)
{
	int arr[20][20] , i, j;
	int m1, n1, p1, sum = 0;

	printf("请输入 m 和 n: ");
	scanf("%d %d", &m1, &n1);
	printf("请输入 %d 行, 每行 %d 列整数:\n", m1, n1);
	for (i = 0; i < m1; i++)
	{
		for (j = 0; j < n1; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("请输入要计算和之列的列号: ");
	scanf("%d", &p1);
	for (i = 0; i < m1; i++)
	{
		for (j = 0; j < n1; j++)
		{
			if (j == p1)
			{
				sum = sum + arr[i][j];
			}
		}
	}
	printf("\n该列上各元素之和为: %d\n", sum);
	return 0;
}