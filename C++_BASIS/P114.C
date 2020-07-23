#include<stdio.h>

int main(void)
{
	int n1, n2;
	char op;
	double a1;

	printf("Please input data1 op data2: ");
	scanf("%d %c %d", &n1, &op, &n2);
	switch (op)
	{
		case '+':
			a1 = (double)n1 + (double)n2;
			printf("%d+%d=%.0lf", n1, n2, a1);
			break;
		case '-':
			a1 = (double)n1 - (double)n2;
			printf("%d-%d=%.0lf", n1, n2, a1);
			break;
		case '*':
			a1 = (double)n1 * (double)n2;
			printf("\n%d*%d=%d\n", n1, n2, a1);
			break;
		case '/':
			if (0 == n2)
			{
				printf("\nError! chu shu wei 0.\n");
			}
			else
			{
				(int)a1 = n1 / n2;
				printf("%d/%d=%d", n1, n2, a1);
			}
			break;
		case '%':
			if (0 == n2)
			{
				printf("\nError! chu shu wei 0.\n");
			}
			else
			{
				(int)a1 = n1 % n2;
				printf("%d%%%d=%d", n1, n2, a1);
			}
			break;
		default:
			printf("\nInvalid op");
	}
	return 0;
}
