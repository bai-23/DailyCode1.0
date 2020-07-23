#include <math.h>
#include <stdio.h>

/* userCode(<80�ַ�): �Զ��庯��֮ԭ������ */
double Area(int a1, int a2, int a3);

int main(void)
{
	int aBian, bBian, cBian;
	double mJi;

	printf("please input triange sides: ");
	scanf("%d,%d,%d", &aBian, &bBian, &cBian);

	if (aBian<0 || bBian<0 || cBian<0
			|| (aBian+bBian <= cBian) || (aBian+cBian <= bBian) || (bBian+cBian <= aBian))
	{
		printf("\ndata error\n");
	}
	else
	{
		mJi = Area(aBian, bBian, cBian);  /* userCode(<50�ַ�): ���ú���������������� */
		printf("\narea=%.2f\n", mJi);
	}

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */

double Area(int a1, int a2, int a3)
{
	double s1, p1;
	
	p1 = ((double)a1 + a2 + a3) / 2;
	s1 = sqrt(p1 * (p1 - (double)a1) * (p1 - a2) * (p1 - a3));
	return s1;
}


