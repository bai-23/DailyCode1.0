#include<stdio.h>
#include<string.h>

int main(void)
{
	int num, score, count = 0;
	char name[9], size[4], lesson[15], checkname[9];

	FILE *Tm;

	printf("������Ҫ���ҳɼ���ѧ��������");
	gets(checkname);
	printf("\n���ҽ��Ϊ��\n");

	Tm = fopen("xscj.txt", "r");
	if (Tm == NULL)
	{
		printf("�ļ���ʧ�ܣ������ļ�����·���Ƿ���ȷ���ļ��Ƿ���ڣ�");
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
		printf("�ļ���û���ҵ�����Ϊ��%s����ѧ��\n", checkname);
	}
	fclose(Tm);
	return 0;
}