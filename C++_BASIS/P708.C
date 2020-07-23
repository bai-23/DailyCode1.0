#include<stdio.h>

int main(void)
{
	int n1, bw, sw, gw, n2;

	printf("Input an integer: ");
	scanf("%d", &n1);
	gw = n1 / 100;
	sw = n1 / 10 - gw * 10;  
	bw = n1 - gw * 100 - sw * 10;
	n2 = bw * 100 + sw * 10 + gw;
	printf("\nThe result is %03d", n2);
	return 0;
}