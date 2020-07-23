#include <stdio.h>

/* userCode(<70�ַ�): �Զ��庯��֮ԭ������ */
int Getmin(int arr[], int n1, int num);

int main(void)
{
	int arrA[5], arrB[8], num, maxA, maxB;

	printf("������5������");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("������8������");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);
	printf("��������һ������");
	scanf("%d", &num);

	maxA = Getmin(arrA, 5, num);  /* userCode(<50�ַ�): ���ú���������arrA��С��num������� */
	if (-1 == maxA)
	{
		printf("\narrA: not Find!");
	}
	else
	{
		printf("\nMax(arrA) = %d", maxA);
	}

	maxB = Getmin(arrB, 8, num);  /* userCode(<50�ַ�): ���ú���������arrB��С��num������� */
	if (-1 == maxB)
	{
		printf("\narrB: not Find!\n");
	}
	else
	{
		printf("\nMax(arrB) = %d\n", maxB);
	}

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int Getmin(int arr[], int n1, int num)
{
	int i, max = -1, count = 0;

	for (i = 0; i < n1; i++)
	{
		if (arr[i] < num)
		{
			count++;
			if (max < arr[i] || count == 1)
			{
				max = arr[i];
			}
		}
	}
	return max;
}


