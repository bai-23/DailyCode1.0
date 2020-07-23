#include<stdio.h>
#include<string.h>

/* userCode(<50字符): 自定义函数之原型声明 */
void Getnx(char str[]);

int main(void)
{
	char str[128];

	printf("Input a string: ");
	gets(str);

	Getnx(str);  /* userCode(<50字符): 调用函数将字符串str逆序存放 */
	printf("\nThe result is: %s\n", str);
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void Getnx(char str[])
{
	int len, i;
	char tmp;

	len = strlen(str);
	for (i = 0; i < len / 2; i++)
	{
		tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
	}
}