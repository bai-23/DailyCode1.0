#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	float num1, num2, ans;
	
	if (argc != 3)
	{
		printf("    usage: P118  num1 num2\n");
		return 103;
	}
	num1 = (float)atof(argv[1]);
	num2 = (float)atof(argv[2]);
	ans = (num1 * num1 - num2 * num2) / 6;
	printf("    (%.3f*%.3f - %.3f*%.3f) / 6   =  %.3f\n", num1, num1, num2, num2, ans);
	return 0;
}