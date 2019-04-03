/*
7．1英寸等于2.54cm。编写一个程序，要求输入您的身高（以英寸为单位），
   然后显示该身高值等于多少厘米。如果您愿意，也可以要求以厘米为单位
   输入身高，然后以英寸为单位进行显示。
*/ 

# include <stdio.h>

int main(){
	float inch = 2.54;
	float tall;
	printf("Please input your height(inch): ");
	scanf("%f", &tall);
	printf("Your height is %f cm\n", tall * inch);
	printf("Please input your height(cm): ");
	scanf("%f", &tall);
	printf("Your height is %f inch\n", tall/inch);
	getchar();
	getchar();
	return 0;
}


