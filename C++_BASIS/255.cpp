#include<stdio.h>

int main()
{
	int i = 8, *p, k;

	p = &i;
	printf("*p = %d\n", &p);
	printf("p = %d\n", *p);
	printf("&i = %d", &i);
}