#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[5][81], tmp[81];
	int i, j;
	
	printf("Input 5 strings:\n");
	for (i = 0; i < 5; i++)
	{
		gets(str[i]);
	}
	for (j = 1; j < 5; j++)
	{
		for (i = 0; i < 5 - j; i++)
		{
			if (strcmp(str[i], str[i + 1]) > 0)
			{
				strcpy(tmp, str[i]);
				strcpy(str[i], str[i + 1]);
				strcpy(str[i + 1], tmp);
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		puts(str[i]);
	}
	return 0;
}