#include<stdio.h>
float Min(float x, float y, float z, float p, float q);

int main(void)
{
	float a1, b1, c1, d1, e1, min;

	printf("请输入5个实数: ");
	scanf("%f, %f, %f, %f, %f", &a1, &b1, &c1, &d1, &e1);
	min = Min(a1, b1, c1, d1, e1);
	printf("\n最小的数是 %.2f\n", min);
	return 0;
}


float Min(float x, float y, float z, float p, float q)
{
	float min = 0;
	if (x < y && x < z && x < p && x < q)
	{
		min = x;
	}
	if (y < x && y < z && y < p && y < q)
	{
		min = y;
	}
	if (z < y && z < x && z < p && z < q)
	{
		min = z;
	}
	if (p < y && p < z && p < x && p < q)
	{
		min = p;
	}
	if (q < y && q < z && q < p && q < x)
	{
		min = q;
	}
	return min;
}



#include<stdio.h>

int main(void)
{
	float a, b, c, e, d, min = 0, tmp, i;
	char str[20];


	scanf("%f, %f, %f, %f, %f", &a, &b, &c, &e, &d);	if (a < min)
	{
		tmp = a;
		a = min;
		min = a
	}
}
