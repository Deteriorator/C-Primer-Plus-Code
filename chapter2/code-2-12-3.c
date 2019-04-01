/*
3.编写一个程序，把您的年龄转换成天数并显示二者的值。
  不用考虑平年（fractional year）和闰年（leap year）的问题.

*/ 

#include <stdio.h> 

int Day = 365;

int main(){
	int year;
	printf("Please Input Your Years:");
	scanf("%d", &year);
	int days = year * Day;
	printf("You are %d years old!\nAnd you have lived %d days!", year, days);
	return 0;
}
