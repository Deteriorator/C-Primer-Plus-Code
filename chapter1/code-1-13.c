/*
*1.���ոձ� MacroMuscle���޹�˾��Software for Hard Bodies��Ƹ�á�
*  �ù�˾Ҫ����ŷ���г�����Ҫһ����Ӣ��ת��Ϊ���ף�1Ӣ��=2.54 cm��
*  �ĳ�������ϣ�������ĸó������ʾ�û�����Ӣ��ֵ�����Ĺ����Ƕ�
*  �����Ŀ�겢��Ƹó��򣨱�̹��̵ĵ�1���͵�2������
*/

#include <stdio.h>

const double A = 2.54;

int main(){
	float n, length;
	printf("Please Input Inch:");
	scanf("%f", &n);
	length = n * A;
	printf("The length is %f cm\n", length);
	getchar();
	return 0;
}
