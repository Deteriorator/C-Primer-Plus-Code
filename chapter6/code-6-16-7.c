/*
7．编写一个程序，要求输入两个浮点数，然后打印出用二者
   的差值除以二者的乘积所得的结果。在用户键入非数字的
   输入之前程序循环处理每对输入值。
*/

#include <stdio.h>

int main()
{
	float f_1, f_2;
	printf("Please Input Two Float Numbers: ");
	while (scanf("%f, %f", &f_1, &f_2) != 1)
	{
		printf("%f\n", (f_1 - f_2) / (f_1 * f_2));
		printf("Please Input Two Float Numbers: ");
	}

	getchar();
	getchar();

	return 0;
}



