/*
6．1个水分子的质量约为3.0×10-23g, 1夸脱水大约有950g。
   编写一个程序，要求输入水的夸脱数，然后显示这么多水中包含多少个水分子。
*/

#include <stdio.h>

int main(){
	double num;
	int kuatuo;
	printf("Please input the num of kuatuo:");
	scanf("%d", &kuatuo);
	num = 950 * kuatuo/(3.0e-23);
	printf("%d kuatuo water has %e number", kuatuo, num);
	getchar();
	getchar();
	return 0;
}


