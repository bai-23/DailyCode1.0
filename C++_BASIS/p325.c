#include<stdio.h>

int main(void)
{
	int n1, n2, res, count = 0;
	char op;

	FILE *ft, *fA, *fB, *ts;

	ft = fopen("Comp (2).txt", "r");
	fA = fopen("CompA.txt", "r");
	fB = fopen("CompB.txt", "r");
	ts = fopen("CompC.txt", "w");
	if (ft == NULL || fA == NULL || fB == NULL)
	{
		printf("file open error!\n");
		return 1;
	}
	while ((fscanf(ft, "%d", &n1) == 1) && (fscanf(fA, "%c\n", &op) == 1) && (fscanf(fB, "%d", &n2) == 1))
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
		fprintf(ts, "Line %03d:  %5d %c %-5d = %-6d\n", count, n1, op, n2, res);
	}
	fclose(ft);
	fclose(fA);
	fclose(fB);
	fclose(ts);
	return 0;
}
