#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) 
{
	int num, len, sum = 0, i;
	char str[10];
	
	printf("请输入一个数：");
	scanf("%d", &num);
	itoa(num, str, 10); /* 对于较高版本的编译器，请使用 _itoa */
	len = strlen(str);
	printf("\n该数的各位数之逆序为：");
	for (i = 0; str[i] != '\0'; i++)
	{
		printf("%c", str[len - i - 1]);
		sum += str[i] - '0'; }
	printf("\n该数的各位数之和为：%d\n", sum);
	return 0;
}