/*
5��һ��Լ��3.156��107s����дһ������Ҫ�������������䣬Ȼ����ʾ������϶����롣
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



