/*
1．编写一个程序，创建一个具有26个元素的数组， 
   并在其中存储26个小写字母。并让该程序显示
   该数组的内容。
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

