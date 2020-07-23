#include<stdio.h>

int main(void)
{
	int n1, i;
	double sn = 10000, hn = 10000;
	
	printf("Please input n: ");
	scanf("%d", &n1);
	
	for (i = 1; i <= n1; i++)
	{		
		hn = hn / 2;
		sn +=2 * hn;
	}
	sn -= hn * 2;
	printf("\nsn=%.6lf,hn=%.6lf", sn, hn);
	return 0;
}