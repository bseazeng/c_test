/*
ͷ�ļ���#include <string.h>

���庯����char * index(const char *s, int c);
����˵����index()�����ҳ�����s �ַ����е�һ�����ֵĲ���c ��ַ��Ȼ�󽫸��ַ����ֵĵ�ַ���ء��ַ��������ַ�(NULL)Ҳ��Ϊ�ַ���һ���֡�

*/

#include <string.h>
#include <stdio.h>
int main(void )
{
    char *s = "0123456789012345678901234567890";
    char *p;
    p = index(s, '5');
    printf("%s\n", p);
}