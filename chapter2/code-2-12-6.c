/*
6.��дһ���ܹ�������������ĳ���
	Smile!Smile!Smile!
	Smile!Smile!
	Smile!

�ڳ����ж���һ������ʾ�ַ���smile!һ�εĺ�����������Ҫʱʹ�øú���
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

