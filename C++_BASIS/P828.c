#include<stdio.h>
#include<string.h>

int main(void)
{
	char a1[128], a2[128], a3[128], max[128];
	
	printf("Please input the first string:\t");
	gets(a1);
	printf("Please input the second string:\t");
	gets(a2);
	printf("Please input the third string:\t");
	gets(a3);
	if (strcmp(a1, a2) > 0)
	{
		strcpy(max, a1);
	}
	else
	{
		strcpy(max, a2);
	}
	if (strcmp(max, a3) < 0)
	{
		strcpy(max, a3);
	}
	printf("\n最大字符串是：%s\n", max);
	return 0;
}

/*从键盘输入3个可带空格的字符串(约定：字符数≤127字节)，输出最大的字符串。编程可用素材：printf("Please input the first string:\t")、printf("Please input the second string:\t")、printf("Please input the third string:\t")、printf("\n最大字符串是：…。
　　程序的运行效果应类似地如图1所示，图1中的C program、hello、god save me是从键盘输入的内容。
Please input the first string:  C program
Please input the second string: hello
Please input the third string:  god save me

最大字符串是：hello*/