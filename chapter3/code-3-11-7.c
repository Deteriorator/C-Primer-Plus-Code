/*
7��1Ӣ�����2.54cm����дһ������Ҫ������������ߣ���Ӣ��Ϊ��λ����
   Ȼ����ʾ�����ֵ���ڶ������ס������Ը�⣬Ҳ����Ҫ��������Ϊ��λ
   ������ߣ�Ȼ����Ӣ��Ϊ��λ������ʾ��
*/ 

# include <stdio.h>

int main(){
	float inch = 2.54;
	float tall;
	printf("Please input your height(inch): ");
	scanf("%f", &tall);
	printf("Your height is %f cm\n", tall * inch);
	printf("Please input your height(cm): ");
	scanf("%f", &tall);
	printf("Your height is %f inch\n", tall/inch);
	getchar();
	getchar();
	return 0;
}


