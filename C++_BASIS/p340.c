#include<stdio.h>
#include<string.h>

int main(void)
{
	char carboard[20], date[20], xx[10], findxx[10];
	int count = 0;
	
	FILE *Tx;
	
	printf("������Ҫ���ҵ�Υ�����ͣ�");
	gets(findxx);
	printf("\n���ҽ��Ϊ��\n");
	Tx = fopen("jtwz.txt", "r");
	if (Tx == NULL)
	{
		printf("�ļ���ʧ�ܣ������ļ�����·���Ƿ���ȷ���ļ��Ƿ���ڣ�");
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
		printf("�ļ���û���ҵ���%s���ļ�¼\n", findxx);
	}
	fclose(Tx);
	return 0;
}