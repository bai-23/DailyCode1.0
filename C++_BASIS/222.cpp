#include<stdio.h>
#include<string.h>

int repstr_str(char str[], char sub[], char repstr[]);

int main()
{
	char str[100], sub[80], repstr[80];
	int n;

	printf("����str��");
	scanf("%s", &str);
	printf("sub��");
	scanf("%s", &sub);
	printf("repstr��");
	scanf("%s", &repstr);

	n = repstr_str(str, sub, repstr);

	return 0;

}
 int repstr_str(char str[], char sub[], char repstr[])
 {
	int count = 0, i, len, j;
	
	len = strlen(str);
	for(i = 0, j = 0; i < len; i++)
	{
		if(str[i] = sub[j])
		{
			sub[j] = repstr[i];

		}
	}
	return count;
 }
