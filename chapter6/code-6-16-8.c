
/*
8������ϰ7�����޸ģ�����ʹ��һ�����������ؼ���ֵ��

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
