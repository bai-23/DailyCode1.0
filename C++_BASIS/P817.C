#include<stdio.h>
#include<string.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
void Getnx(char str[]);

int main(void)
{
	char str[128];

	printf("Input a string: ");
	gets(str);

	Getnx(str);  /* userCode(<50�ַ�): ���ú������ַ���str������ */
	printf("\nThe result is: %s\n", str);
	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
void Getnx(char str[])
{
	int len, i;
	char tmp;

	len = strlen(str);
	for (i = 0; i < len / 2; i++)
	{
		tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
	}
}