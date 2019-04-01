/*
1.编写一个程序，调用printf（）函数在一行上输出您的名和姓，
  再调用一次printf（）函数在两个单独的行上输出您的名和姓，
  然后调用一对printf（）函数在一行上输出您的名和姓。
*/


#include <stdio.h>

int main(){
	char ming[10] = "Love";
	char xing[10] = "Min";
	printf("%s %s\n", ming, xing);
	printf("%s\n%s\n", ming, xing);
	printf("%s", ming);
	printf(" %s\n", xing);
	return 0;
}
