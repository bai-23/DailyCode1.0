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
	printf("\n����ַ����ǣ�%s\n", max);
	return 0;
}

/*�Ӽ�������3���ɴ��ո���ַ���(Լ�����ַ�����127�ֽ�)����������ַ�������̿����زģ�printf("Please input the first string:\t")��printf("Please input the second string:\t")��printf("Please input the third string:\t")��printf("\n����ַ����ǣ�����
�������������Ч��Ӧ���Ƶ���ͼ1��ʾ��ͼ1�е�C program��hello��god save me�ǴӼ�����������ݡ�
Please input the first string:  C program
Please input the second string: hello
Please input the third string:  god save me

����ַ����ǣ�hello*/