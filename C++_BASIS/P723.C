#include<stdio.h>
#include<math.h>

int main(void)
{
	float aa, bb, cc;
	float p1, area;

	printf("please input triange sides: ");
	scanf("%f, %f, %f", &aa, &bb, &cc);
	if ((aa + bb > cc) && (bb + cc > aa) && (aa + cc > bb))
	{
		p1 = (aa + bb + cc) / 2;
		area = (sqrt(p1 * (p1 - aa) * (p1 - bb) * (p1 - cc)));
		printf("\narea=%.2f\n", area);
	}
	else
	{
		printf("\ndata error\n");
	
	}
	return 0;
}