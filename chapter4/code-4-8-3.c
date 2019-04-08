/*
3．编写一个程序，读取一个浮点数，并且首先以小数点记数法，然后以指数记数法打印之。
   输出使用下列形式（在指数位置显示的数字的位数可能会随系统而不同）：
       a. The input is 21.3 or 2.1e+001
       b. The input is +21.29 or 2.129E+001
*/

#include <stdio.h>


int main(){
	float input;
	printf("Please input float number: ");
	scanf("%f", &input);
	printf("a. The input is %.1f or %3.1e\n", input, input);
	printf("b. The input is %+.2f or %3.3e\n", input, input);
	getchar();
	getchar();
	return 0;
}
	


