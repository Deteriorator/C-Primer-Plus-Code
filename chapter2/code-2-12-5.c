/*
5.编写一个程序，创建一个名为toes的整数变量。
  让程序把toes设置为10。再让程序计算两个toes
  的和以及toes的平方。程序应该输出所有的3个值，并分别标识它们。
*/

#include <stdio.h>

int main(){
	int toes = 10;
	printf("toes is %d\nsum of two toes is %d\ntoes's Square is %d", toes, toes + toes, toes * toes);
	return 0;
}

