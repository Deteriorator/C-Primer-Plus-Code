/*
5����дһ�������ӡһ�������ÿһ�ж�����һ��������
   ����ƽ���Լ�����������Ҫ���û����������������ޡ�ʹ��һ��forѭ����
*/

#include <stdio.h>

int main()
{
	int max, min, i;
	printf("Please Input The Min Numbers: ");
	scanf("%d", &min);
	printf("Please Input The Max Numbers: ");
	scanf("%d", &max);
	for (i = min; i <= max; i++)
	{
		printf("%d\t%d\t%d\t\n", i, i*i, i*i*i );
	}

	getchar();
	getchar();
	return 0;
}



