#include <stdio.h>

/* userCode(<70字符): 自定义函数之原型声明 */
int Getnum(int arr[], int n1);

int main(void)
{
	int arrA[5], arrB[8], countA, countB;

	printf("请输入5个数：");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("请输入8个数：");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);

	countA = Getnum(arrA, 5);  /* userCode(<50字符): 调用函数查找arrA中大于其平均值的元素个数 */
	printf("\nCount(arrA) = %d", countA);
	countB = Getnum(arrB, 8);  /* userCode(<50字符): 调用函数查找arrB中大于其平均值的元素个数 */
	printf("\nCount(arrB) = %d\n", countB);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */


int Getnum(int arr[], int n1)
{
	int i, num = 0;
	double ave = 0;
	
	for (i = 0; i < n1; i++)
	{
		ave += arr[i];
	}
	ave = ave / n1;
	for (i = 0; i < n1; i++)
	{
		if (arr[i] > ave)
		{
			num++;
		}
	}
	return num;
}
