/*
5．改写用来找到前20个整数之和的程序addemup.c（程序清单5.13）
   （如果您愿意，可以把addemup.c程序看成是一个计算如果您第一
   天得到$1，第二天得到$2，第三天得到$3，以此类推，您在20天
   里会挣多少钱的程序）。修改该程序，目的是您能交互地告诉程
   序计算将进行到哪里。也就是说，用一个读入的变量来代替20。
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


