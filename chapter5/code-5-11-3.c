/*
3．编写一个程序，该程序要求用户输入天数，然后将该值转换为周数和天数。例如，此程序将把18天转换成2周4天。用下面的格式显示结果：

		18 days are 2 weeks, 4 days.

	使用一个while循环让用户重复输入天数；当用户输入一个非正数（如0或-20）时，程序将终止循环。
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

