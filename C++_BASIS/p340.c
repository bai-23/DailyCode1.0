#include<stdio.h>
#include<string.h>

int main(void)
{
	char carboard[20], date[20], xx[10], findxx[10];
	int count = 0;
	
	FILE *Tx;
	
	printf("请输入要查找的违章类型：");
	gets(findxx);
	printf("\n查找结果为：\n");
	Tx = fopen("jtwz.txt", "r");
	if (Tx == NULL)
	{
		printf("文件打开失败，请检查文件名及路径是否正确、文件是否存在！");
		return 1;
	}
	while (fscanf(Tx, "%s %s %s", &carboard, &date, &xx) == 3)
	{
		if (strcmp(xx, findxx) == 0)
		{
			count++;
			printf("%d %s, %s, %s\n", count, carboard, date, xx);
		}
	}
	if (count == 0)
	{
		printf("文件中没有找到“%s”的记录\n", findxx);
	}
	fclose(Tx);
	return 0;
}