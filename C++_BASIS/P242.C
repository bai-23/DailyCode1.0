#include <stdio.h>

int Count(int arr[]);  /* userCode(<50字符): 自定义函数1之原型声明 */
void Getdx(int arra[]);  /* userCode(<50字符): 自定义函数2之原型声明 */

int main(void)
{
	int num[16], count;

	printf("请输入若干个数: ");
	count = Count(num);  /* userCode(<30字符): 调用函数读入数据到num中并统计个数 */

	printf("\n共%d个数，倒序为: ", count);
	Getdx(num);  /* userCode(<30字符): 调用函数倒序输出num的所有元素 */

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int Count(int arr[])
{
	int count = 0, i;

	for (i = 0; i < 16; i++)
	{
		scanf("%d", &arr[i]);
		if (-1 == arr[i])
		{
			break;
		}
		count++;
	}
	return count;
}

void Getdx(int arra[])
{
	int j, n1 = 0;

	for (j = 0; j < 16; j++)
	{
		if (arra[j] == -1)
		{
			break;
		}
		n1++;
	}
	for (j = n1 - 1; j >= 0; j--)
	{
		printf("%d ", arra[j]);
	}
}