/*
1����дһ�����򡣽��÷��ӱ�ʾ��ʱ��ת������Сʱ�ͷ��ӱ�ʾ��ʱ�䡣
   ʹ��#define����const������һ������60�ķ��ų�����ʹ��whileѭ��
   �������û��ظ�����ֵ�����ҵ�����һ��С�ڵ���0��ʱ��ʱ��ֹѭ����
*/ 

#include <stdio.h>

#define a 60

int main(){
	int time, hour, minute;
	printf("Please Input Time: ");
	scanf("%d", &time);
	while(time > 0){
		hour = time / a;
		minute = time - hour * a;
		printf("Time : %d hour %d minute\n", hour, minute);
		printf("Please Input Time: ");
		scanf("%d", &time);
	}
	getchar();
	getchar();
	return 0;
}


