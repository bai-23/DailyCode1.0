#include <stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
long int Ans(int n1);

int main(void)
{
	int n;
	long int Fn;
	
	printf("Please input a number: ");
	scanf("%d", &n);
	
	Fn = Ans(n);  /* userCode(<50�ַ�): ���ú�������f(n) */
	printf("\nf(%d) = %ld\n", n, Fn);
	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */

long int Ans(int n1)
{
	long ans;
	
	if (n1 > 1)
	{
		ans = 2 * Ans(n1 / 2) + n1;
	}
	if (n1 == 1)
	{
		ans = 1;
	}
	if (n1 < 1)
	{
		ans = 0;
	}
	return ans;
}
