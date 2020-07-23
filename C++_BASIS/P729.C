#include<stdio.h>

int main(void)
{
	int xx, yy;

	printf("please input x, y: ");
	scanf("%d,%d", &xx, &yy);
	if (xx > yy)
	{
		printf("\n%d is bigger\n", xx);
	}
	if (xx < yy)
	{
		printf("\n%d is bigger\n", yy);
	}
	return 0;
}