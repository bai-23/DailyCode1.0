#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[128], temp;
	int i, len, j;
	
	printf("input the string: ");
	for (i = 0; i < 128; i++)
	{
		scanf("%c", &str[i]);
		if (str[i] == '\n')
		{
			str[i] = '\0';
			break;
		}
	}
	len = strlen(str);
	for (j = 0; j < len - 1; j++)
	{
		for (i = 0; i < len - j - 1; i++)
		{
			if (str[i] > str[i + 1])
			{
				temp = str[i];
				str[i] = str[i + 1];
				str[i + 1] = temp;
			}
		}
	}
	printf("\nResult: ");
	for (i = 0; i < len; i++)
	{
		printf("%c", str[i]);
	}
	str[i] = '\0';
	printf("\n");
	return 0;
}


/*#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[128], tmp;
	int i, len, j;

	printf("input the string: ");
	for (i = 0; i < 128; i++)
	{
		scanf("%c", &str[i]);
		if (str[i] == '\n')
		{
			str[i] = '\0';
			break;
		}
	}
	len = strlen(str);
	for (j = 1; j < len; j++)
	{
		for (i = 0; i < len - j; i++)
		{
			if (str[i] > str[i + 1])
			{
				tmp = str[i];
				str[i] = str[i + 1];
				str[i + 1] = tmp;
			}
		}
	}
	printf("\nResult: ");
	for (i = 0; i < len; i++)
	{
		printf("%c", str[i]);
	}
	str[i] = '\0';
	return 0;
}*/