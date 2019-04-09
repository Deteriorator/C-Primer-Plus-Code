/*
1．编写一个程序。将用分钟表示的时间转换成以小时和分钟表示的时间。
   使用#define或者const来创建一个代表60的符号常量。使用while循环
   来允许用户重复键入值，并且当键入一个小于等于0的时间时终止循环。
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


