/*
6．编写一个程序把一个单词读入一个字符数组，然后反向打印出这个词。
   提示：使用strlen（）（第4章）计算数组中最后一个字符的索引。
*/

#include <stdio.h>
#include <string.h>

int main()
{	
	char s[100];
	int i, len;
	printf("Please Input A straing: ");
	scanf("%s", s);
	len = strlen(s);
	for (i = len; i >= -1; i--)
	{
		printf("%c", s[i-1]);
	}
	printf("\n");

	getchar();
	getchar();

	return 0;

}


