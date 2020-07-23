#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	float n1, n2, res;

	if (argc != 3)
	{
		printf("    usage: P116  num1 num2\n");
		return 9;
	}
	n1 = (float)atof(argv[1]);
	n2 = (float)atof(argv[2]);
	res = (n1 + n2) / (float)2;
	printf("    (бн + бн) / 2   =  %.3f\n", res);
	
	return 0;
}