/*
ͷ�ļ���#include <string.h>

���庯����char * rindex(const char *s, int c);

����˵����rindex()�����ҳ�����s �ַ��������һ�����ֵĲ���c ��ַ��Ȼ�󽫸��ַ����ֵĵ�ַ���ء��ַ��������ַ�(NULL)Ҳ��Ϊ�ַ���һ���֡�

����ֵ������ҵ�ָ�����ַ��򷵻ظ��ַ����ڵĵ�ַ�����򷵻�0��

*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *s = "0123456789012345678901234567890";
	char *p = NULL;
	p = rindex(s, '5');
	if(NULL != p)
		printf("%s\n", p);

	return 0;
}

