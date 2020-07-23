#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
int Getmax(int arr[], int n1);

int main(void)
{
	int arrA[5], arrB[8], maxA, maxB;

	printf("请输入5个数：");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("请输入8个数：");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);

	maxA = Getmax(arrA, 5);  /* userCode(<30字符): 调用函数计算arrA中元素的最大值 */
	printf("\nMax(arrA) = %d", maxA);
	maxB = Getmax(arrB, 8);  /* userCode(<30字符): 调用函数计算arrB中元素的最大值 */
	printf("\nMax(arrB) = %d\n", maxB);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

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