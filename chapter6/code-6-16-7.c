/*
7����дһ������Ҫ������������������Ȼ���ӡ���ö���
   �Ĳ�ֵ���Զ��ߵĳ˻����õĽ�������û���������ֵ�
   ����֮ǰ����ѭ������ÿ������ֵ��
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



