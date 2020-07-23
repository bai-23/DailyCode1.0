#include<stdio.h>

int main(void)
{
	int n1, n2, res;
	char op;

	FILE *ft;

	ft = fopen("comp.txt", "r");
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
			printf("%d + %d = %d\n", n1, n2, res);
		}
		else
		{
			res = n1 - n2;
			printf("%d - %d = %d\n", n1, n2, res);
		}
		//printf("%d %c %d = %d\n", n1, op, n2, res);
	}
	fclose(ft);
	return 0;
}
