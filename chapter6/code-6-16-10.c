/*
10．编写一个程序把8个整数读入一个数组中，然后以相反的顺序打印它们。
*/

#include <stdio.h>

int main()
{
	int arr[100];
	int i = 0, n = 8;
	for (i; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 7; i >= 0; i--)
	{
		printf("%d\t", arr[i]);
	}
	getchar();
	getchar();
	return 0;
	
}


