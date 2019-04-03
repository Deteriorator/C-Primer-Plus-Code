/*
5．一年约有3.156×107s。编写一个程序，要求输入您的年龄，然后显示该年龄合多少秒。
*/

# include <stdio.h>

int main(){
	float seconds = 3.156e7f;
	unsigned int old;
	printf("Please input your years old:");
	scanf("%d", &old);
	printf("You have lived %d seconds!", old * seconds);
	getchar();
	getchar();
	return 0;
}



