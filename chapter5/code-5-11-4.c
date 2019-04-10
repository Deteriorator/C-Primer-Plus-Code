/*
4．编写一个程序让用户按厘米输入一个高度值，然后，
   程序按照厘米和英尺英寸显示这个高度值。允许厘
   米和英寸的值出现小数部分。程序允许用户继续输
   入，直到用户输入一个非正的数值。程序运行的示
   例如下所示：
       Enter a height in centimeters: 182
       182.0 cm = 5 feet, 11.7 inches
       Enter a height in centimeters (<=0 to quit): 168
       168.0 cm = 5 feet, 6.1 inches
       Enter a height in centimeters (<=0 to quit): 0
       bye
*/

#include <stdio.h>

int main(){
	int cm, feet;
	float inch;
	printf("Enter a height in centimeters: ");
	scanf("%d", &cm);
	while(1){
		inch = cm / 2.54;
		feet = (int)inch/12;
		inch = inch - feet*12;
		printf("%.1f cm = %d feet, %.1f inches\n", (float)cm, feet, inch);
		printf("Enter a height in centimeters (<=0 to quit): ");
		scanf("%d", &cm);
		if(cm <= 0){
			printf("bye\n");
			break;
		}
	}
	getchar();
	getchar();
	return 0;
}

