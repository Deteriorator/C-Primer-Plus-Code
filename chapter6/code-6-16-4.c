/*
4．让程序要求用户输入一个大写字母，使用嵌套循环产生像下面这样的金字塔图案：
				A
			   ABA
			  ABCBA
			 ABCDCBA
			ABCDEDCBA
	这种图案要扩展到用户输入的字符。例如，前面的图案是在输入E时需要产生的。
	提示：使用一个外部循环来处理行，在每一行中使用三个内部循环，一个处理空
	格，一个以升序打印字母，一个以降序打印字母。如果您的系统不使用ASCII或
	类似的以严格数字顺序表示字母的编码，请参见在编程练习3中给出的建议。
*/


#include <stdio.h>

int main()
{	
    char c;
	int a, i, j;
	printf("请输入大写字母: ");
	scanf("%c", &c);
	a = c - 'A' + 1;
	//printf("%d\n", a);
	for (i = 1; i <= a; i++ )
	{
		for (j = 0; j < a - i; j++ )
		{
			printf(" ");
		}

		for (j = 0; j < i; j++ )
		{
			printf("%c", 'A' + j );
		}

		for (j = i - 1; j > 0; j-- )
		{
			printf("%c", 'A' + j - 1);
		}

		printf("\n");
	}

	getchar();
	getchar();
	
	return 0;

}




