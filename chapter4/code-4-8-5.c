/*
5����дһ����������Ҫ���û��������֣�Ȼ��Ҫ���û��������ϡ���һ�д�ӡ�����������
   ����һ�д�ӡÿ����������ĸ�ĸ���������ĸ��������Ӧ���ֵĽ�β���룬������ʾ��
       Melissa Honeybee
             7        8
   Ȼ���ӡ��ͬ����Ϣ��������ĸ��������Ӧ���ʵĿ�ʼ���롣
       Melissa Honeybee
	   7       8
*/

#include <stdio.h>
#include <string.h>

int Max(int x, int y);

int main(){
	char xing[10];
	char ming[10];
	int l1, l2, len;
	printf("Please input your xing: ");
	scanf("%s", xing);
	printf("Please input your ming: ");
	scanf("%s", ming);
	l1 = strlen(xing);
	l2 = strlen(ming);
	len = Max(l1, l2);
	printf("%*s %*s\n", len, xing, len, ming);
	printf("%*d %*d\n", len, l1, len, l2);
	printf("%*s %*s\n", len, xing, len, ming);
	printf("%-*d %-*d\n", len, l1, len, l2);
	getchar();
	getchar();
	return 0;
	
}

int Max(int x, int y){
	return x > y ? x : y;	
}

