
/*
8．对练习7进行修改，让它使用一个函数来返回计算值。

*/

#include <stdio.h>

float func(float a, float b);

int main()
{
	float x, y;
	printf("Please Input Two Float Numbers: ");
	while (scanf("%f, %f", &x, &y) != 0)
	{
		printf("%f\n", func(x, y));
		printf("Please Input Two Float Numbers: ");
	}
}

float func(float a, float b)
{
	return (a - b) / (a * b);
}
