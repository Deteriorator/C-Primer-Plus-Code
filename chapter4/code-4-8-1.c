/*
1．编写一个程序，要求输入名字和姓氏，然后以“名字，姓氏”的格式打印。
*/ 

#include<stdio.h>

int main(){
	char ming[10];
	char xing[10];
	printf("Please input your name: ");
	scanf("%s", ming);
	scanf("%s", xing);
	printf("%s, %s\n", ming, xing);
	getchar();
	getchar();
	return 0;
}

