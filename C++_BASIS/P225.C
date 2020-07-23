#include<stdio.h>

int main(void)
{
	int num1, num2, bw, sw, gw, i, p1 = 0;

	printf("Please Input a number: ");
	scanf("%d", &num1);

	printf("\nResult: ");
	for (i = 100; i <= 999; i++)
	{
		bw = i / 100;
		sw = i / 10 - bw * 10;
		gw = i - bw * 100 - sw * 10;
		num2 = bw * bw * bw + sw * sw * sw + gw * gw *gw; 
		if (num1 == num2)
		{
			printf("%5d", i);
			p1 = 1;
		}
	}
	if (p1 == 0)
	{
		printf("not Find!\n");
	}
	return 0;
}