#include<stdio.h>

int main(void)
{
	int i;

	printf("������һ��������");
	scanf("%d", &i);
	while(i)
	{
		printf("%d", i % 10);
		i /= 10;
		if(i != 0)
		{
			printf(" ");
		}
	}

	return 0;
}