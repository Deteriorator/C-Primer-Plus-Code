/*
6����дһ����������һ��ֵΪ1.0/3.0��double���ͱ�����һ��ֵΪ1.0/3.0��float���ͱ�����
   ÿ��������ֵ��ʾ���Σ�һ����С�����Ҳ���ʾ4�����֣�һ����С�����Ҳ���ʾ12�����֣�
   ��һ����С�����Ҳ���ʾ16�����֡�ͬʱҪ�ó������float.h�ļ�������ʾFLT_DIG��DBL_DIG��ֵ��
   1.0/3.0����ʾֵ����Щֵһ����
*/

#include <stdio.h>
#include <float.h>

int main(){
	double a = 1.0/3.0;
	float b = 1.0/3.0;
	printf("%.4lf\n", a);
	printf("%.12lf\n", a);
	printf("%.16lf\n", a);
	printf("%.4lf\n", b);
	printf("%.12lf\n", b);
	printf("%.16lf\n", b);
	printf("Digit of float value on this system = %e\n", FLT_DIG);
    printf("Digit of double value on this system = %e\n", DBL_DIG);
}



