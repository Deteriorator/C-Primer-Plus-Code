/*
7.��дһ�����򣬳�����Ҫ������Ϊone_three�����ĺ������ú���Ҫ��һ������ʾ����"one"��
  �ٵ���two����������Ȼ��������һ������ʾ����"three"������two����Ӧ������һ������ʾ
  ����"two"��main��������Ӧ���ڵ���one_three��������֮ǰ��ʾ����"starting now:"��
  ��������֮��Ҫ��ʾ"done!"������������������Ӧ������ʾ��
  		starting now:
  		one
  		two
  		three
  		done!
*/

# include <stdio.h>

void one_three(){
	printf("One\n");
	two();
	printf("three\n");
} 

void two(){
	printf("two\n");
}

int main(){
	printf("starting now:\n");
	one_three();
	printf("done!\n");
}

