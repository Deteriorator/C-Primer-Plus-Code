/*
5．编写一个程序，首先要求用户输入名字，然后要求用户输入姓氏。在一行打印输入的姓名，
   在下一行打印每个名字中字母的个数。把字母个数与相应名字的结尾对齐，如下所示：
       Melissa Honeybee
             7        8
   然后打印相同的信息，但是字母个数与相应单词的开始对齐。
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

