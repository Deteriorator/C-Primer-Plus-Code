/*
4����дһ������Ҫ��������ߣ���Ӣ��Ϊ��λ�������֣�Ȼ����������ʽ��ʾ��
       Dabney, you are 6.208 feet tall
    ʹ��float���ͣ�ʹ��/��Ϊ���š������Ը�⣬����Ҫ��������Ϊ��λ������ߣ�������Ϊ��λ������ʾ��
*/

# include <stdio.h>

int main(){
	char name[10];
	float height;
	printf("Please input your name: ");
	scanf("%s", name);
	printf("please input your height(inch): ");
	scanf("%f", &height);
	printf("%s, you are %.3f feet tall.\n", name, height);
	printf("please input your height(cm): ");
	scanf("%f", &height);
	printf("%s, you are %.2f meter tall.\n", name, height / 100);
	getchar();
	getchar();
	return 0;
}

