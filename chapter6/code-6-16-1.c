/*
1����дһ�����򣬴���һ������26��Ԫ�ص����飬 
   �������д洢26��Сд��ĸ�����øó�����ʾ
   ����������ݡ�
*/ 

#include <stdio.h>

int main(){
	char a[] = {
			'a', 'b', 'c', 'd', 'e', 'f', 'g', 
			'h', 'i', 'j', 'k', 'l', 'm', 'n', 
			'o', 'p', 'q', 'r', 's', 't', 'u', 
			'v', 'w', 'x', 'y', 'z'
			};
	int i;
	for(i = 0; i < 26; i++){
		printf("%c\t", a[i]);
	}
	getchar();
	getchar();
	return 0;
}

