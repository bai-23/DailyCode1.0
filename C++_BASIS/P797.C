#include <stdio.h>

/* userCode(<80�ַ�): �Զ��庯��֮ԭ������ */
int BMax(int arr[5][9], int *maxi, int *maxj);

int main(void)
{
	int array[5][9], i, j, max, maxRow, maxCol;

	printf("Input matrix:\n");
	for (i=0; i<5; i++)
	{
		for (j=0; j<9; j++)
		{
			scanf("%d", &array[i][j]);
		}
	}

	/* userCode(<80�ַ�): ���ú����������������Ԫ�ؼ�������λ�õ����±ꡢ���±� */
	max = BMax(array, &maxRow, &maxCol);
	printf("\nThe max is %d, row-sub is %d, col-sub is %d\n", max, maxRow, maxCol);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */

int BMax(int arr[5][9], int *maxi, int *maxj)
{
	int max, i, j;

	max = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (arr[i][j] >= max)
			{
				max = arr[i][j];
				*maxi = i;
				*maxj = j;
			}
		}
	}
	return max;
} 