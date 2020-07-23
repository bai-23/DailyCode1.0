#include<stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
int Count(char str[]);

int main(void)
{
	int Len;
	char String[101] = "?????????????????????????????????????????????????????????????";
	
	printf("input a string: ");
	Len = Count(String);  /* userCode(<50字符): 调用函数实现输入并统计输入字符个数 */		

	printf("\nThe string lenth is: %d\n", Len);
	printf("The string is: %s\n", String);
	
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */

int Count(char str[])
{
	int i, count = 0, num;
	
	for (i = 0; i < 101; i++)
	{	
		num = scanf("%c", &str[i]);
		if (num == -1 || str[i] == '\n' || i == 100)
		{
			str[i] = '\0';
			break;
		}
		count++;
		
	}
	return count;
}