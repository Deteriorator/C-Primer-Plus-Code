/*
5．编写一个程序打印一个表，表的每一行都给出一个整数、
   它的平方以及它的立方。要求用户输入表的上限与下限。使用一个for循环。
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



