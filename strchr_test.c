/*
ͷ�ļ���#include <string.h>

strchr() ��������ĳ�ַ����ַ������״γ��ֵ�λ�ã���ԭ��Ϊ��
    char * strchr (const char *str, int c);

��������str ΪҪ���ҵ��ַ�����c ΪҪ���ҵ��ַ���

strchr() �����ҳ� str �ַ����е�һ�γ��ֵ��ַ� c �ĵ�ַ��Ȼ�󽫸õ�ַ���ء�

ע�⣺�ַ��� str �Ľ�����־ NUL Ҳ�ᱻ���������Χ������ str �����һ���ַ�Ҳ���Ա���λ��

������ֵ������ҵ�ָ�����ַ��򷵻ظ��ַ����ڵ�ַ�����򷵻� NULL��

���صĵ�ַ���ַ������ڴ����������ĵ�ַ�ټ��������������ַ����ַ���λ�á����ַ����ַ������״γ��ֵ�λ��Ϊ i����ô���صĵ�ַ��������Ϊ str + i��

��ʾ�����ϣ������ĳ�ַ����ַ��������һ�γ��ֵ�λ�ã�����ʹ�� strrchr() ������

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char *s = "0123456789012345678901234567890";
	char *p = NULL;
	p = strchr(s, '5');
	printf("%ld\n", s);
	if( NULL != p )
		printf("%ld\n", p);
	return 0;
}