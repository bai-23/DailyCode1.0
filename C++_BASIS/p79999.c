#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) 
{
	int num, len, sum = 0, i;
	char str[10];
	
	printf("������һ������");
	scanf("%d", &num);
	itoa(num, str, 10); /* ���ڽϸ߰汾�ı���������ʹ�� _itoa */
	len = strlen(str);
	printf("\n�����ĸ�λ��֮����Ϊ��");
	for (i = 0; str[i] != '\0'; i++)
	{
		printf("%c", str[len - i - 1]);
		sum += str[i] - '0'; }
	printf("\n�����ĸ�λ��֮��Ϊ��%d\n", sum);
	return 0;
}