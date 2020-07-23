#include<stdio.h>

int main(void)
{
	double a1[14] = {0, 1, 2};
	int n1, i;

	//a1[0] = 0;
	//a1[1] = 1;
	//a1[2] = 2;
	printf("Input n (13>=n>=2): ");
	scanf("%d", &n1);
	for (i = 2; i < n1; i++)
	{
		a1[i + 1] = 2 * a1[i] + a1[i - 1] * a1[i - 2]; 
	}
	printf("\nf(%d)=%.f\n", n1, a1[i]);
	return 0;
}