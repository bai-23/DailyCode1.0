#include<stdio.h>

int main(void)
{
	int gr[40], max, min, i, sum = 0, j;
	double ave, ji;

	printf("������40λͬѧ�ĳɼ���");
	for (i = 0; i < 40; i++)
	{
		scanf("%d", &gr[i]);
	}
	max = 0;
	min = gr[0];
	for (i = 0, j = 0; i < 40; i++)
	{
		if (max < gr[i])
		{
			max = gr[i];	
		}
		if (min > gr[i])
		{
			min = gr[i];
		}
		sum += gr[i];
		if (gr[i] >= 60)
		{
			j++;
		}
	}
	ave = (double)sum / 40;
	ji = (double)j / 40 * 100;
	printf("\n��߷֣�%d\n��ͷ֣�%d\nƽ���֣�%.1lf\n�����ʣ�%.0lf%%\n",\
		max, min, ave, ji);
	return 0;
}