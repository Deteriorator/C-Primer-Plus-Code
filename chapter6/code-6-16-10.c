/*
10����дһ�������8����������һ�������У�Ȼ�����෴��˳���ӡ���ǡ�
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


