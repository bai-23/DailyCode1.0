#include<stdio.h>

int main(void)
{
	int max, min, i1, m1;

	printf("Please Input two number: ");
	scanf("%d %d", &min, &max);

	printf("\nResult: ");
	m1 = max;
	for (i1 = 1; i1 <= m1; i1++)
	{
		printf(" %d", min);
		min = min + 5;
	}
	return 0;
}