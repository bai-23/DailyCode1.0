#include<stdio.h>

int main(void)
{
	int arr[20][20] , i, j;
	int m1, n1, p1, sum = 0;

	printf("������ m �� n: ");
	scanf("%d %d", &m1, &n1);
	printf("������ %d ��, ÿ�� %d ������:\n", m1, n1);
	for (i = 0; i < m1; i++)
	{
		for (j = 0; j < n1; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("������Ҫ�����֮�е��к�: ");
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
	printf("\n�����ϸ�Ԫ��֮��Ϊ: %d\n", sum);
	return 0;
}