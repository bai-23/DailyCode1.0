#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[128], str2[128];
	int i, n1 = 0, m1;

	printf("Please input string: ");
	gets(str1);
	m1 = strlen(str1);
	for (i = 0; i < m1; i++)
	{
		if (str1[i] <= '9' && str1[i] >= '0')
		{
			str2[n1] = str1[i];
			n1++;
		}	
	}
	str2[n1] = '\0';
	printf("\nshu zi ge shu wei: %d", n1);
	printf("\nshu zi wei: %s\n", str2);
	return 0;
}


#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[128], str2[128];
	int i, len, count;

	gets(str1);
	len = strlen(str1);
	for (i = 0; i < len; i++)
	{
		if (str1[i] <= '9' && str1[i] >= '0')
		{
			str2[count] = str1[i];
			count++;
		}
	}
	str2[count] = '\0';
	printf("%d", count);
	printf("%s", str2);
}