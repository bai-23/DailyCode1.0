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
	res = (n1 + n2) / 2;
	printf("    (%.3f + %.3f) / 2   =  %.3f\n", n1, n2, res);
	return 0;
}