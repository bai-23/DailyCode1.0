/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
	long num;
	int sum = 0, i, len;
	char str[10];
	
	printf("请输入一个数：");
	scanf("%d", &num);
	itoa(num, str, 10); 
	len = strlen(str);

	printf("\n该数的各位数之逆序为：");
	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
		sum += str[i] - '0'; 
	}
	printf("\n该数的各位数之和为：%d\n", sum);
	return 0;
}*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	char arr[10];
	long n1;
	int i, sum = 0, len;

	scanf("%d", &n1);
	itoa(n1, arr, 10);
	len = strlen(arr);
	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", arr[i]);
		sum = sum + arr[i] - '0';
	}
	printf("\n%d", sum);
	return 0;
}
