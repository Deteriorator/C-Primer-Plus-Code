/*
4����дһ���������û�����������һ���߶�ֵ��Ȼ��
   ���������׺�Ӣ��Ӣ����ʾ����߶�ֵ��������
   �׺�Ӣ���ֵ����С�����֡����������û�������
   �룬ֱ���û�����һ����������ֵ���������е�ʾ
   ��������ʾ��
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

