#include <stdio.h>

/* userCode(<70字符): 自定义函数之原型声明 */
int Getmin(int arr[], int n1, int num);

int main(void)
{
	int arrA[5], arrB[8], num, minA, minB;

	printf("请输入5个数：");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("请输入8个数：");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);
	printf("请再输入一个数：");
	scanf("%d", &num);

	minA = Getmin(arrA, 5, num);  /* userCode(<50字符): 调用函数查找在arrA中大于num的最小数 */
	if (-1 == minA)
	{
		printf("\narrA: not Find!");
	}
	else
	{
		printf("\nMin(arrA) = %d", minA);
	}

	minB = Getmin(arrB, 8, num);  /* userCode(<50字符): 调用函数查找在arrB中大于num的最小数 */
	if (-1 == minB)
	{
		printf("\narrB: not Find!\n");
	}
	else
	{
		printf("\nMin(arrB) = %d\n", minB);
	}

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

int Getmin(int arr[], int n1, int num)
{
	int i, min = -1, count = 0;

	for (i = 0; i < n1; i++)
	{
		if (num < arr[i])
		{
			count++;
			if (min > arr[i] || count == 1)
			{
				min = arr[i];
			}
		}
	}
	return min;
}



