#include<stdio.h>

int main(void)
{
	char cbegin, cend, i;

	printf("Please Input two char: ");
	scanf("%c%c", &cbegin, &cend);

	printf("\nResult: ");
	for (i = cbegin; i >= cend; i--)
	{
		printf("%c%c,", cbegin, cbegin + 1);
		cbegin--;
	}
	return 0;
}