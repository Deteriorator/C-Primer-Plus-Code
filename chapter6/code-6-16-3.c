/*
3��ʹ��Ƕ��ѭ����������ͼ����
    F
    FE
    FED
    FEDC
    FEDCB
    FEDCBA
   ��ע�⣺�������ϵͳ��ʹ��ASC�������������˳�������룬
   �����԰�һ���ַ������ʼ��Ϊ��ĸ���е���ĸ��
    char lets[26] = "ABCDEFGHIJKLMNOPQRSTUVWxYZ"
   Ȼ��Ϳ���ʹ������������ѡ�õ�������ĸ������lets[0]�ǡ�A�����ȵȡ�
*/

#include <stdio.h>

int main()
{
	int i, n, j;
	char cc;
	scanf("%c", &cc);
	n = cc - 'A' + 1;
	
	for(i=1; i <=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%c", cc - j +1);
		}
		printf("\n");
	}
	
	return  0;
}



