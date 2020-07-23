#include<stdio.h>

int main(void)
{
	int n1, n2, sum;

	printf("please input data: ");
	scanf("%d %d", &n1, &n2);
	sum = n1 + n2;
	printf("\nResult: %d + %d = %d\n", n1, n2, sum);
	return 0;
}