#include<stdio.h>
#include<string.h>

int main(void)
{
	char arr[128], exc;
	int i, n;

	printf("Input a string: ");
	gets(arr);
	n = strlen(arr);
	for (i = 0; i < n / 2; i++)
	{
		exc = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - i - 1] = exc;
	}
	
	printf("\nThe result is: %s\n", arr);
	return 0;
}