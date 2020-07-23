#include<stdio.h>

int main(void)
{
	char a1, b1, c1, d1, e1, f1, g1, h1, i1, j1, k1;

	printf("\n请输入11个数字：");
	scanf("%d%d%d%d%d%d%d%d%d%d%d", &a1, &b1, 
		&c1, &d1, &e1, &f1, &g1, &h1, &i1, &j1, &k1);
	printf("\n解密结果为：%c%c%c%c%c%c%c%c%c%c%c", 
		a1, b1, c1, d1, e1, f1, g1, h1, i1, j1, k1);
	return 0;
}