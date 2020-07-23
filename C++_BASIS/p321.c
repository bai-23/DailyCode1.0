#include<stdio.h>

int main(void)
{
	int n1, n2, res, count = 0;
	char op;

	FILE *ft;

	ft = fopen("Comp (1).txt", "r");
	if (ft == NULL)
	{
		printf("file open error!\n");
		return 1;
	}
	while (fscanf(ft, "%d %c %d", &n1, &op, &n2) == 3)
	{
		if (op == '+')
		{
			res = n1 + n2;
		}
		else
		{
			res = n1 - n2;
		}
		count++;
		printf("Line %03d:  %5d %c %-5d = %-6d\n", count, n1, op, n2, res);
	}
	fclose(ft);
	return 0;
}
