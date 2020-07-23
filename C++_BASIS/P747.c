#include<stdio.h>

int main(void)
{
	int a1[15], i, find, flag = 0;
	
	printf("please input 15 integer numbers:\n");
	for (i = 0; i < 15; i++)
	{
		scanf("%d", &a1[i]);
	}
	printf("please input the integer you want to find: ");
	scanf("%d", &find);
	for (i = 0; i < 15; i++)
	{
		if (find == a1[i])
		{	
			printf("\n%d has been found,it is a[%d]\n", \
				find, i);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		printf("\n%d has not been found\n", find);
	}
	
	return 0;
}