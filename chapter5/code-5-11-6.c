/*
6�������޸ı����ϰ5�еĳ���ʹ���ܹ���������ƽ���ĺͣ�
   �����ϲ��������������Ϊ���������һ��õ�$1���ڶ����
   ��$4��������õ�$9���Դ����������õ�����Ǯ���⿴������
   һ���ܺõ���������Cû��ƽ����������������������n��ƽ��
   ��n*n����ʵ��
*/


#include <stdio.h>


int main(){
	int sum = 0;
	int i, days;
	printf("Please Input Work Days: ");
	scanf("%d", &days);
	for(i = 1; i <= days; i++){
		sum = sum + i*i;
	}
	printf("%d days you earn $%d", days, sum);
	getchar();
	getchar();
	return 0;
}
