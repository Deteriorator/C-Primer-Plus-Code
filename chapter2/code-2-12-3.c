/*
3.��дһ�����򣬰���������ת������������ʾ���ߵ�ֵ��
  ���ÿ���ƽ�꣨fractional year�������꣨leap year��������.

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
