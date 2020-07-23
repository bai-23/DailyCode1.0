#include<stdio.h>

int main(void)
{
	float gg;
	char cc;

	do
	{
		printf("please input the score(0-100): ");	
		scanf("%f", &gg);
	} while (gg < 0 || gg > 100);

	switch ((int)gg / 10)
	{
		case 10:
		case 9:
			cc = 'A';
			break;
		case 8:
			cc = 'B';
			break;
		case 7:
			cc = 'C';
			break;
		case 6:
			cc = 'D';
			break;
		default:
			cc = 'E';
	}
	printf("\nscore=%.1f,grade=%c", gg, cc);
	return 0;
}