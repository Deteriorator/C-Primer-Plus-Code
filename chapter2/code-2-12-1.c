/*
1.��дһ�����򣬵���printf����������һ����������������գ�
  �ٵ���һ��printf������������������������������������գ�
  Ȼ�����һ��printf����������һ����������������ա�
*/


#include <stdio.h>

int main(){
	char ming[10] = "Love";
	char xing[10] = "Min";
	printf("%s %s\n", ming, xing);
	printf("%s\n%s\n", ming, xing);
	printf("%s", ming);
	printf(" %s\n", xing);
	return 0;
}
