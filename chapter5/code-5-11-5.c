/*
5����д�����ҵ�ǰ20������֮�͵ĳ���addemup.c�������嵥5.13��
   �������Ը�⣬���԰�addemup.c���򿴳���һ�������������һ
   ��õ�$1���ڶ���õ�$2��������õ�$3���Դ����ƣ�����20��
   ���������Ǯ�ĳ��򣩡��޸ĸó���Ŀ�������ܽ����ظ��߳�
   ����㽫���е����Ҳ����˵����һ������ı���������20��
*/


#include <stdio.h>


int main(){
	int sum = 0;
	int i, days;
	printf("Please Input Work Days: ");
	scanf("%d", &days);
	for(i = 1; i <= days; i++){
		sum = sum + i;
	}
	printf("%d days you earn $%d", days, sum);
	getchar();
	getchar();
	return 0;
}


