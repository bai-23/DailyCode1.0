#include <stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
int Getmax(int arr[], int n1);

int main(void)
{
	int arrA[5], arrB[8], maxA, maxB;

	printf("������5������");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("������8������");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);

	maxA = Getmax(arrA, 5);  /* userCode(<30�ַ�): ���ú�������arrA��Ԫ�ص����ֵ */
	printf("\nMax(arrA) = %d", maxA);
	maxB = Getmax(arrB, 8);  /* userCode(<30�ַ�): ���ú�������arrB��Ԫ�ص����ֵ */
	printf("\nMax(arrB) = %d\n", maxB);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */

int Getmax(int arr[], int n1)
{
	int i, max = 0;

	for (i = 0; i < n1; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}