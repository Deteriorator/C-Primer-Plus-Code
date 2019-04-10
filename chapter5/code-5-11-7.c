/*
7．编写一个程序，该程序要求输入一个float型数并打印该数的立方值。
   使用您自己设计的函数来计算该值的立方并且将它的立方打印出来。
   main（）程序把输入的值传递给该函数。
*/

#include <stdio.h>

float cube(float x);


int main(){
	float a;
	printf("Please Input A Float Number: ");
	scanf("%f", &a);
	printf("%f * %f * %f = %f\n", a, a, a, cube(a));
	getchar();
	getchar();
	return 0;
}

float cube(float x){
	return x*x*x;
}
