#include<stdio.h>
#include<string.h>

int main(void)
{
	int num, score, count = 0, sum = 0, count1 = 0;
	float ans;
	char name[9], size[4], lesson[20], checklesson[20];

	FILE *Tm;

	printf("������Ҫ���㼰���ʵĿγ����ƣ�");
	gets(checklesson);
	printf("\n������Ϊ��\n");

	Tm = fopen("xscj.txt", "r");
	if (Tm == NULL)
	{
		printf("�ļ���ʧ�ܣ������ļ�����·���Ƿ���ȷ���ļ��Ƿ���ڣ�");
		return 1;
	}
	while (fscanf(Tm, "%d %s %s %s %d", &num, &name, &size, &lesson, &score) == 5)
	{
		if (strcmp(checklesson, lesson) == 0)
		{
			count++;
			if (score >= 60)
			{
				count1++;
			}
			ans = (float)count1 / count;
		}	
	}
	if (count != 0)
	{
		printf("�γ̡�%s���� %d ��ѡѧ�����м��� %d �ˣ�������Ϊ %.1f\n", checklesson, count, count1, ans);
	}
	if (count == 0)
	{
		printf("�ļ���û������Ϊ��%s���Ŀγ�\n", checklesson);
	}
	fclose(Tm);
	return 0;
}