/*
3����дһ�����򣬶�ȡһ��������������������С�����������Ȼ����ָ����������ӡ֮��
   ���ʹ��������ʽ����ָ��λ����ʾ�����ֵ�λ�����ܻ���ϵͳ����ͬ����
       a. The input is 21.3 or 2.1e+001
       b. The input is +21.29 or 2.129E+001
*/

#include <stdio.h>


int main(){
	float input;
	printf("Please input float number: ");
	scanf("%f", &input);
	printf("a. The input is %.1f or %3.1e\n", input, input);
	printf("b. The input is %+.2f or %3.3e\n", input, input);
	getchar();
	getchar();
	return 0;
}
	


