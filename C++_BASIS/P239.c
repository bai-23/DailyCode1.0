#include<stdio.h>

int main(void)
{
	int i, a1[100], count = 0;

	printf("���������ɸ���: ");
	for (i = 0; i < 16; i++)
	{
		scanf("%d", &a1[i]);
		if (-1 == a1[i])	/*��-1ʱֹͣ*/
		{
			break;
		}
		count++;
	}
	printf("\n��Щ������Ϊ: ");
	for (i = count - 1; i >= 0; i--)
	{
		printf("%d ", a1[i]);
	}
	return 0;
}