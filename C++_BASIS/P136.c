#include<stdio.h>
#include<math.h>

int main()
{
	double x, ans;
	
	printf("�����뻡�� x: ");
	scanf("%lf", &x);
	ans = cos(x);
	printf("\nCos(%.2lf) = %.5lf\n", x, ans);

}