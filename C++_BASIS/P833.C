#include <stdio.h>

#define MAX 20

/* userCode(<100字符): 自定义函数之原型声明 */
void rotate(int a1[][MAX], int b1[][MAX], int m1, int n1);

int main(void)
{
	int arrA[MAX][MAX], arrB[MAX][MAX], i, j, m, n;

	printf("请输入 m n: ");
	scanf("%d %d", &m, &n);

	printf("请输入 %d 行 %d 列矩阵:\n", m, n);
	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
		{
			scanf("%d", &arrA[i][j]);
		}
	}

	rotate(arrA, arrB, m, n);  /* 调用函数进行转置 */

	printf("\n转置后的矩阵为:\n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			printf("%5d ", arrB[i][j]);
		}
		putchar('\n');
	}

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

void rotate(int a1[][MAX], int b1[][MAX], int m1, int n1)
{
	int p1, q1;

	for (p1 = 0; p1 < m1; p1++)
	{
		for (q1 = 0; q1 < n1; q1++)
		{
			b1[q1][p1] = a1[p1][q1];	
		}
	}
}