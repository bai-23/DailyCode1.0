#include<stdio.h>

int main(void)
{
	char pp, qq, cc;

	printf("Please Input two char: ");
	scanf("%c%c", &pp, &qq);
	printf("\nResult: ");
	for (cc = pp; cc >= qq; cc--)
	{
		printf("%c", cc);
	}
	printf("\n");
	return 0;
}