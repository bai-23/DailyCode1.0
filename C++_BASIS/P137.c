#include<stdio.h>

int main(void)
{
	char name1[9], name2[9];
	
	printf("请输入姓名1: ");
	gets(name1);
	printf("请输入姓名2: ");
	gets(name2);
	if (name1[0] == name2[0] && name1[1] == name2[1])
	{
		printf("\n“%s”与“%s”同姓。\n", name1, name2);
	}
	else
	{
		printf("\n“%s”与“%s”不同姓。\n", name1, name2);
	}
	
	return 0;
}