/*
*1.您刚刚被 MacroMuscle有限公司（Software for Hard Bodies）聘用。
*  该公司要进入欧洲市场，需要一个将英寸转换为厘米（1英寸=2.54 cm）
*  的程序。他们希望建立的该程序可提示用户输入英寸值。您的工作是定
*  义程序目标并设计该程序（编程过程的第1步和第2步）。
*/

#include <stdio.h>

const double A = 2.54;

int main(){
	float n, length;
	printf("Please Input Inch:");
	scanf("%f", &n);
	length = n * A;
	printf("The length is %f cm\n", length);
	getchar();
	return 0;
}
