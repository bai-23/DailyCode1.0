#include <stdio.h>

#define maxNums 100

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
float Getmax(int scor[], int n1);

int main(void)
{
	int i, count, scores[maxNums];
	float avgScore;

	printf("Please input scores(-1 to exit): ");
	for (i=0; i<maxNums; i++)
	{
		scanf("%d", &scores[i]);
		if (-1 == scores[i])
		{
			break;
		}
	}
	count = i;

	avgScore = Getmax(scores, count);  /* userCode(<50�ַ�): ���ú�������ƽ���ɼ� */
	printf("\naverage score is %.2f.\n", avgScore);
	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */

float Getmax(int scor[], int n1)
{
	int i;
	float avg = 0;

	for (i = 0; i < n1; i++)
	{
		avg = avg + scor[i];
	}
	avg = avg / n1;
	return avg;
}