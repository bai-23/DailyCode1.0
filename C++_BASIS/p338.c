#include<stdio.h>
#include<string.h>

int main(void)
{
	int num, score, count = 0, sum = 0;
	double ans;
	char name[9], size[4], lesson[20], checklesson[20];

	FILE *Tm;

	printf("请输入要计算平均成绩的课程名称：");
	gets(checklesson);
	printf("\n计算结果为：\n");

	Tm = fopen("xscj.txt", "r");
	if (Tm == NULL)
	{
		printf("文件打开失败，请检查文件名及路径是否正确、文件是否存在！");
		return 1;
	}
	while (fscanf(Tm, "%d %s %s %s %d", &num, &name, &size, &lesson, &score) == 5)
	{
		if (strcmp(checklesson, lesson) == 0)
		{
			count++;
			sum += score;
			ans = (double)sum / count;
		}	
	}
	printf("课程“%s”有 %d 人选学，平均成绩为 %.1lf\n", checklesson, count, ans);
	if (count == 0)
	{
		printf("文件中没有名称为“%s”的课程\n", checklesson);
	}
	fclose(Tm);
	return 0;
}