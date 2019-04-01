/*
6.编写一个能够产生下列输出的程序：
	Smile!Smile!Smile!
	Smile!Smile!
	Smile!

在程序中定义一个能显示字符串smile!一次的函数，并在需要时使用该函数
*/

#include <stdio.h>

void smile(){
	printf("Smile!");
}


int main(){
	int i, j; 
	for(i = 0; i < 3; i++){
		for(j = i; j < 3; j ++){
			smile();
		}
		printf("\n");
	}
	return 0;
}

