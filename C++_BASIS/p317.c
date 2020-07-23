#include<stdio.h>

int main(void)
{
	char name[128], name2[128];
	int ch;

	FILE *Tr, *Tw;
		
	printf("Please input sourceFilename: ");
	gets(name);
	printf("Please input destinationFilename: ");
	gets(name2);
	Tr = fopen(name, "rb");
	Tw = fopen(name2, "wb");
	if (Tr == NULL)
	{
		printf("\nsource File (%s) Open Error!\n", name);
		return 2;
	}
	if (Tw == NULL)
	{
		printf("\ndestination File (%s) Create Error!\n", name2);
		fclose(Tr);
		return 3;
	}
	while ((ch = fgetc(Tr)) != EOF)
	{
		if (fputc(ch, Tw) == EOF)
		{
			printf("\nwriting destination File (%s) Error!\n", name2);
			fclose(Tr);
			fclose(Tw);
			return 4;
		}
	}
	printf("\ncopy %s to %s successed!\n", name, name2);
	fclose(Tr);
	fclose(Tw);
	return 0;
}