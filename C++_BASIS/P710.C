#include<stdio.h>

int main(void)
{
	char y1;

	printf("Input a lowercase letter: ");
	scanf("%c", &y1);
	printf("\n%c(%d)", y1, y1);
	printf("\n%c(%d)", y1 - 32, y1 - 32);
	return 0;
}