/*
2����дһ�����򣬴˳���Ҫ������һ��������Ȼ���ӡ���ӣ�������
   �����ֵ�����������������ֵ��10����������ֵ��Ҳ����˵����
   ������Ϊ5����ô����ʹ�5��15����Ҫ���ڸ������ֵ֮���ÿո�
   �Ʊ�����з��ֿ���
*/

#include <stdio.h>

int main(){
	int a, i;
	printf("Please Input A Number: ");
	scanf("%d", &a);
	for(i = a; i <= a+10; i++){
		printf("%d ", i);
	}
	printf("\n");
	for(i = a; i <= a+10; i++){
		printf("%d\t", i);
	}
	printf("\n");
	for(i = a; i <= a+10; i++){
		printf("%d\n", i);
	}
	getchar();
	getchar();
	return 0;
}

