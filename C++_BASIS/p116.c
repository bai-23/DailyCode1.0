#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	float num1, num2, ans;

	if (argc != 3)
	{
		printf("    usage: P116  num1 num2\n");
		return 9;
	}
	num1 = (float)atof(argv[1]);
	num2 = (float)atof(argv[2]);
	ans = (num1 + num2) / 2;
	printf("    (%.3f + %.3f) / 2   =  %.3f\n", num1, num2, ans);
	return 0;
}