/*
6����дһ�������һ�����ʶ���һ���ַ����飬Ȼ�����ӡ������ʡ�
   ��ʾ��ʹ��strlen��������4�£��������������һ���ַ���������
*/

#include <stdio.h>
#include <string.h>

int main()
{	
	char s[100];
	int i, len;
	printf("Please Input A straing: ");
	scanf("%s", s);
	len = strlen(s);
	for (i = len; i >= -1; i--)
	{
		printf("%c", s[i-1]);
	}
	printf("\n");

	getchar();
	getchar();

	return 0;

}


