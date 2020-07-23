#include <stdio.h>

#define MAX 20

/* userCode(<80字符): 自定义函数之原型声明 */
void Exc(int aa[][MAX], int ab[][MAX], int m1);

int main(void)
{
	int arrayA[MAX][MAX], arrayB[MAX][MAX], i, j, m;

	printf("Please input m: ");
	scanf("%d", &m);

	printf("Please input arrayA:\n");
	for (i=0; i<m; i++)
	{
		for (j=0; j<m; j++)
		{
			scanf("%d", &arrayA[i][j]);
		}
	}

	Exc(arrayA, arrayB, m);  /* userCode(<60字符): 调用函数实现数组内容变换 */
	printf("\nafter rotate:\n");
	for (i=0; i<m; i++)
	{
		for (j=0; j<m; j++)
		{
			printf("%6d", arrayB[i][j]);
		}
		putchar('\n');
	}

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

void Exc(int aa[][MAX], int ab[][MAX], int m1)
{
	int i, j;

	for (i = 0; i < m1; i++)
	{
		for (j = 0; j < m1; j++)
		{
			ab[i][j] = aa[i][j];
		}
	}
	for (i = 0; i < m1; i++)
	{
		ab[i][0] = aa[m1 - 1][i];
		ab[i][m1 - 1] = aa[0][i];
	}
}

