#include <stdio.h>

/* userCode(<80字符): 自定义函数之原型声明 */
int FindMin(int a1[], int n1, int *pos);

int main(void)
{
	int num[10], i, MinVal, MinPos;

	printf("Input 10 integers: ");
	for (i=0; i<10; i++)
	{
		scanf("%d", &num[i]);
	}

	MinVal = FindMin(num, 10, &MinPos);
	printf("\nMinVal=%d MinPos=%d\n", MinVal, MinPos);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

int FindMin(int a1[], int n1, int *pos)
{
	int min, i;
			
	min = a1[0];
	for (i = 0; i < n1; i++)
	{
		if (a1[i] <= min)
		{
			min = a1[i];
			*pos = i;
		}
	}
	return min;
}