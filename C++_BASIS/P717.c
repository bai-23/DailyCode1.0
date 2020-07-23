 #include<stdio.h>

int main(void)
{
	int i, a1[10];
	int count = 0;
	
	printf("Input 10 integers: ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a1[i]);
	}
	for (i = 0; i < 10; i++)
	{
		
		if (i % 2 == 1 && a1[i] % 2 == 1)
		{
			count++;
		}
	}
	printf("\ncount=%d\n", count);
	for (i = 0; i < 10; i++)
	{
		
		if (i % 2 == 1 && a1[i] % 2 == 1)
		{
			printf("a[%d]=%d\n", i, a1[i]);
			//count++;
		}
		
	}
	
	return 0;
}