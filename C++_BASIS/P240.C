#include <stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
int Sumfl(int arr[], int n1);

int main(void)
{
	int arrayA[6], arrayB[10], arrayC[15], sumA, sumB, sumC;

	sumA = Sumfl(arrayA, 6);  /* userCode(<50�ַ�): ���ú����� 6������arrayA�У�������� */
	sumB = Sumfl(arrayB, 10);  /* userCode(<50�ַ�): ���ú�����10������arrayB�У�������� */
	sumC = Sumfl(arrayC, 15);  /* userCode(<50�ַ�): ���ú�����15������arrayC�У�������� */

	printf("\narrayA[0]=%3d, arrayA[ 5]=%3d, sum(arrayA)=%d", arrayA[0], arrayA[5], sumA);
	printf("\narrayB[0]=%3d, arrayB[ 9]=%3d, sum(arrayB)=%d", arrayB[0], arrayB[9], sumB);
	printf("\narrayC[0]=%3d, arrayC[14]=%3d, sum(arrayC)=%d\n", arrayC[0], arrayC[14], sumC);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int Sumfl(int arr[], int n1)
{
	int i, sum = 0;

	printf("������%d����: ", n1);
	for (i = 0; i < n1; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	return sum;
}