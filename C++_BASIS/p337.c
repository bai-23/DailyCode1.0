#include<stdio.h>
#include<string.h>

int main(void)
{
	int num, score, count = 0;
	char name[9], size[4], lesson[15], checkname[9];

	FILE *Tm;

	printf("请输入要查找成绩的学生姓名：");
	gets(checkname);
	printf("\n查找结果为：\n");

	Tm = fopen("xscj.txt", "r");
	if (Tm == NULL)
	{
		printf("文件打开失败，请检查文件名及路径是否正确、文件是否存在！");
		return 1;
	}
	while (fscanf(Tm, "%d %s %s %s %d", &num, &name, &size, &lesson, &score) == 5)
	{
		
		if (strcmp(name, checkname) == 0)
		{
			count++;
			printf("%d %d, %-8s, %s, %s, %d\n", count, num, name, size, lesson, score);	
		
		}
		
	}
	if (count == 0)
	{
		printf("文件中没有找到姓名为“%s”的学生\n", checkname);
	}
	fclose(Tm);
	return 0;
}