#include<stdio.h>

int main(void)
{
	int a1;

	printf("Please input an integer: ");
	scanf("%d", &a1);
	if (a1 % 35 == 0)
	{
		printf("\nYes.");
	}
	else
	{
		printf("\nNo.");
	}
	return 0;
}