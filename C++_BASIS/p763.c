#include <stdio.h>

/* User Code Begin(�������ڱ��к���Ӵ��룬����ȫ�ֱ����Ķ��塢����ԭ�������ȣ���������) */
int Gethigh(struct stu myClass[], int n);

struct stu
{
	int num;
	char name[20];
	float score1, score2, score3, aver;
}myClass[5];

/* User Code End(������Ӵ������) */

int main(void)
{
	int high;  /* high��¼ƽ������ߵ�ѧ������ţ�����ʹ�òο�����Ĵ��� */

	/* User Code Begin(�������ڱ��к���Ӵ��룬��������) */
	int i;

	printf("Please input students  info:Num Name score1 score2 score3\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d:", i + 1);
		scanf("%d %s %f %f %f", &myClass[i].num, myClass[i].name,
			&myClass[i].score1, &myClass[i].score2, &myClass[i].score3);
		myClass[i].aver = (myClass[i].score1 + myClass[i].score2 + myClass[i].score3) / 3;
	}
	high = Gethigh(myClass, 5);

	/* User Code End(������Ӵ������) */

	printf("\nThe Highest is %s(%d)\nscore1=%.2f  score2=%.2f  score3=%.2f  aver=%.2f\n",
		myClass[high].name, myClass[high].num,
		myClass[high].score1, myClass[high].score2, myClass[high].score3, myClass[high].aver);

	return 0;
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣���������) */

int Gethigh(struct stu myClass[], int n)
{
	float maxaver;
	int i, high = 0;

	maxaver = myClass[0].aver;
	for (i = 0; i < n; i++)
	{
		if (maxaver <= myClass[i].aver)
		{
			maxaver = myClass[i].aver;
			high = i;
		}
	}
	return high;
}