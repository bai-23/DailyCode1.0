#include<stdio.h>

int main(void)
{
	char name[128];
	int ch;

	FILE *Tr;
		
	printf("input the file's name: ");
	gets(name);
	Tr = fopen(name, "r");
	printf("------------------------File Begin:----------------------\n");
	if (Tr == NULL)
	{
		printf("\nfile open error!");
		return 1;
	}
	while ((ch = fgetc(Tr)) != EOF)
	{
		printf("%c", ch);
	}
	printf("\n------------------------ File End. ----------------------\n");
	fclose(Tr);
	return 0;
}