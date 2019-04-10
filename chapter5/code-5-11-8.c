/*
8．编写一个程序，该程序要求用户输入一个华氏温度。程序以double类型读入温度值，
   并将它作为一个参数传递给用户提供的函数Temperatures（）。该函数将计算相应的
   摄氏温度和绝对温度，并以小数点右边有两位数字的精度显示这三种温度。它应该用
   每个值所代表的温度刻度来标识这3个值。下面是将华氏温度转换成摄氏温度的方程：
   		
		Celsius=1.8 * Fahrenheit + 32.0

	通常用在科学上的绝对温度的刻度是0代表绝对零，是可能温度的下界。下面是将摄
	氏温度转换为绝对温度的方程：

		Kelvin=Celsius + 273.16

	Temperatures（）函数使用const来创建代表该转换里的3个常量的符号。main（）函
	数将使用一个循环来允许用户重复地输入温度，当用户输入q或其他非数字值时，循环结束。
*/

#include <stdio.h>

void Temperatures(double x);

int main(){
	double a;
	printf("输入一个华氏温度: ");
	while(scanf("%lf", &a) == 1){
		Temperatures(a);
		printf("请输入一个华氏温度(输入q或其他非数字值结束)：");
	}
	getchar();
	getchar();
	return 0;
}

void Temperatures(double x){
	const double CF = 1.8;
	const double FC = 32.0;
	const double KC = 173.16;
	printf("华氏温度: %.2lf\n摄氏温度: %.2lf\n绝对温度: %.2lf\n", x, CF * x + 32.0, CF * x + 32.0 + 273.16);	
}

