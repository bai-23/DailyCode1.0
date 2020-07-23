#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[128], str2[128], str3[128];
	int n1, n2, n3, max;
	
	printf("Please input the first string:\t");
	gets(str1);
	n1 = strlen(str1);
	printf("Please input the second string:\t");
	gets(str2);
	n2 = strlen(str2);
	printf("Please input the third string:\t");
	gets(str3);
	n3 = strlen(str3);
	if (n3 > n2 && n3 > n1)
	{
		max = n3;
	}
	if (n1 > n2 && n1 > n3)
	{
		max = n1;
	}
	if (n2 > n1 && n2 > n3)
	{
		max = n2;
	}
	printf("\n最长的字符串长度为：%d\n", max);
	return 0;
}