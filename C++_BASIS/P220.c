#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[128];
	int zimu = 0, shuzi = 0, kongge = 0, qita = 0, i, n1;

	printf("Please input string: ");
	gets(str);
	n1 = strlen(str);
	for (i = 0; i < n1; i++)
	{
		if (str[i] <= '9' && str[i] >= '0')
		{
			shuzi++;
		}
		else if (str[i] == ' ')
		{
			kongge++;
		}
		else if ((str[i] <= 'z' && str[i] >= 'a') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			zimu++;
		}

		else
		{
			qita++;
		}
	}
	printf("\nzimu=%d,shuzi=%d,kongge=%d,qita=%d\n", zimu, shuzi, kongge, qita);
	return 0;
}