#include<stdio.h>

int main(void)
{
	char cbe;
	int icou, a1;

	printf("Please Input a char and a number: ");
	scanf("%c %d", &cbe, &icou);

	printf("\nResult: ");
	for (a1 = 1; a1 <= icou; a1++)
	{
		printf("%c", cbe);
		cbe++;
	}
	printf("\n");

	return 0;
}