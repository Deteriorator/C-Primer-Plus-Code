/*
7����дһ�����򣬸ó���Ҫ������һ��float��������ӡ����������ֵ��
   ʹ�����Լ���Ƶĺ����������ֵ���������ҽ�����������ӡ������
   main��������������ֵ���ݸ��ú�����
*/

#include <stdio.h>

float cube(float x);


int main(){
	float a;
	printf("Please Input A Float Number: ");
	scanf("%f", &a);
	printf("%f * %f * %f = %f\n", a, a, a, cube(a));
	getchar();
	getchar();
	return 0;
}

float cube(float x){
	return x*x*x;
}
