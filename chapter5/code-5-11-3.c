/*
3����дһ�����򣬸ó���Ҫ���û�����������Ȼ�󽫸�ֵת��Ϊ���������������磬�˳��򽫰�18��ת����2��4�졣������ĸ�ʽ��ʾ�����

		18 days are 2 weeks, 4 days.

	ʹ��һ��whileѭ�����û��ظ��������������û�����һ������������0��-20��ʱ��������ֹѭ����
*/

#include <stdio.h>

int main(){
	int days, week, day;
	while(1){
		printf("Please Input Days: ");
		scanf("%d", &days);
		if(days <= 0){
			printf("%d is invalid", days);
			break;
		}
		else{
			week = days / 7;
			day = days - 7*week;
			if(week == 0){
				if(day == 1){
					printf("%d day are %d day\n", days, day);
				}
					
				else {
					printf("%d days are %d days\n", days, day);
				}
			}
			else if(week == 1){
				if(day == 0){
					printf("%d days are %d week\n", days, week);
				}
				else if(day == 1){
					printf("%d days are %d week, %d day\n", days, week, day);
				}
				else {
					printf("%d days are %d week, %d days\n", days, week, day);
				}
			}
			else{
				if(day == 0){
					printf("%d days are %d weeks\n", days, week);
				}
				else if(day == 1){
					printf("%d days are %d weeks, %d day\n", days, week, day);
				}
				else {
					printf("%d days are %d weeks, %d days\n", days, week, day);
				}
			}
		}
	}
	getchar();
	getchar();
	return 0;
}

