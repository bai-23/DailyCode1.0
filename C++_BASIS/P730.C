#include<stdio.h>

int main(void)
{
	int a1, b1;

	printf("please input x y: ");
	scanf("%d %d", &a1, &b1);
	if (a1 == b1)
	{
		printf("\nyes");
	}
	if (a1 != b1)
	{
		printf("\nno");
	}
	return 0;
}