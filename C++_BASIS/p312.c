#include<stdio.h>
#include<string.h>

int main(void)
{
	char name[20], size[12], desname[20];
	long num;
	float price;
	int flag = 0;

	FILE *Tr;

	Tr = fopen("sp.dat", "rb");
	if (Tr == NULL)
	{
		printf("file open error!\n");
		return 1;
	}
	printf("Please input shang pin pin ming:");
	gets(desname);
	printf("\ncha zhao qing kuang:\n");
	while (fread(name, sizeof(char), 20, Tr) == 20 &&
		fread(size, sizeof(char), 12, Tr) == 12 &&
		fread(&num, sizeof(long), 1, Tr) == 1 &&
		fread(&price, sizeof(float), 1, Tr) ==1)
	{	
		if (strcmp(desname, name) == 0)
		{
			flag = 1;
			printf("%s,%s,%d,%.2f\n", name, size, num, price);	
		}
	}
	if (flag == 0)
	{
		printf("mei you shang pin :%s\n", desname);
	}
	fclose(Tr);
	return 0;
}