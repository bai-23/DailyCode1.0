#include <stdio.h>

#define N 20

/* userCode(<50字符): 自定义函数之原型声明 */
void Getmax(int arr[][N], int m1, int n1);

int main(void)
{
	int m, n;
	int hang, lie, juZhen[N][N];

	printf("Please input m and n: ");
	scanf("%d%d", &m, &n);

	printf("Please input a juZhen(%d hang, %d lie):\n", m, n);
	for (hang = 0; hang < m; hang++)
	{
		for (lie = 0; lie < n; lie++)
		{
			scanf("%d", &juZhen[hang][lie]);
		}
	}
	puts("");

	Getmax(juZhen, m, n);  /* userCode(<50字符): 调用函数找出每一行上的最大值的列下标并按示例格式要求显示 */
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

void Getmax(int arr[][N], int m1, int n1)
{
	int i, j, maxj, max;

	for (i = 0; i < m1; i++)
	{
		max = arr[i][0];
		for (j = 0; j < n1; j++)
		{
			if (arr[i][j] >= max)
			{
				max = arr[i][j];
				maxj = j;
			}
		}
	printf("The max value in line %d is %d\n", i, maxj);
	}
}

