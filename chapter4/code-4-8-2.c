/*
2����дһ������Ҫ���������֣���ִ�����²�����
	a������������˫�����д�ӡ������
    b���ڿ��Ϊ20���ַ����ֶ��ڴ�ӡ���֣����������ֶ����������ڡ�
    c���ڿ��Ϊ20���ַ����ֶε���˴�ӡ���֣����������ֶ����������ڡ�
    d���ڱ����ֿ�3���ַ����ֶ��ڴ�ӡ����	
*/

#include <stdio.h>
#include <string.h>
int main(){
	char name[10];
	int width;
	printf("Please input your name: ");
	scanf("%s", name);
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	width = strlen(name) + 3;
	printf("\"%*s\"\n", width, name);
	
}

