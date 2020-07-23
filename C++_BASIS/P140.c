#include<stdio.h>

int main(void)
{
	char a1, b1, c1, d1, e1, max;

	printf("请输入5个字符: ");
	scanf("%c%c%c%c%c", &a1, &b1, &c1, &d1, &e1);
	for (max = 0; max < a1 || max < b1 || max < c1 || max < d1 || max < e1; max++)
	{
		
	}
	printf("\n最大的字符是 %c-%d\n", max, max);
	return 0;
}       
  