#include<stdio.h>

int main(void)
{
	char max, i1;
	char min, m1;

	printf("Please Input two char: ");
	scanf("%c%c", &max, &min);

	printf("\nResult: ");
	m1 = max;
	for (i1 = min; i1 <= m1; i1++)
	{
		printf("%c%c%c,", max, max + 1, max + 2);
		max--;
	}
	printf("\n");
	return 0;
}