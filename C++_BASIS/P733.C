#include<stdio.h>

int main(void)
{
	char p1;
	
	printf("Input a character: ");
	scanf("%c", &p1);
	printf("\nAscii('%c') = 0x%x\n", p1, p1);
	return 0;
}