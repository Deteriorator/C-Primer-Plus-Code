/*
6��1��ˮ���ӵ�����ԼΪ3.0��10-23g, 1����ˮ��Լ��950g��
   ��дһ������Ҫ������ˮ�Ŀ�������Ȼ����ʾ��ô��ˮ�а������ٸ�ˮ���ӡ�
*/

#include <stdio.h>

int main(){
	double num;
	int kuatuo;
	printf("Please input the num of kuatuo:");
	scanf("%d", &kuatuo);
	num = 950 * kuatuo/(3.0e-23);
	printf("%d kuatuo water has %e number", kuatuo, num);
	getchar();
	getchar();
	return 0;
}


