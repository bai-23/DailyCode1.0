#include<stdio.h>
#include<string.h>

int main(void)
{
	int num, count = 0;
	float money;
	char name[21], size[11], checkname[21];

	FILE *Tm;

	printf("Please input shang pin pin ming:");
	gets(checkname);
	printf("\ncha zhao qing kuang:\n");

	Tm = fopen("sp.txt", "r");
	if (Tm == NULL)
	{
		printf("open error.\n");
		return 1;
	}
	while (fscanf(Tm, "%s %s %f %d", &name, &size, &money, &num) == 4)
	{
		if (strcmp(name, checkname) == 0)
		{
			printf("%s,%s,%d,%.2f\n", name, size, num, money);
			count++;
		}
	}
	if (count == 0)
	{
		printf("mei you shang pin :%s", checkname);
	}
	return 0;
}