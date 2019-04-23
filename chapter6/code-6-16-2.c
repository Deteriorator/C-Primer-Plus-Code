/*
2．使用嵌套循环产生下列图案：
   $
   $$
   $$$
   $$$$
   $$$$$ 
*/


#include <stdio.h>

int main()
{
	int n = 5;
	int i, j;
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf("$");
		}
		printf("\n");
	}
}

