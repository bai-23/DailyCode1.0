#include<stdio.h>

int main(void)
{
	int max, min, i1, m1;

	printf("Please Input two number: ");
	scanf("%d %d", &max, &min);

	printf("\nResult: ");
	m1 = max;
	for (i1 = min; i1 <= m1; i1++)
	{
		printf("%d/%d ", max, max + 1);
		max--;
	}
	return 0;
}