/*
ͷ�ļ���#include <string.h>

���庯����void * memchr(const void *s, char c, size_t n);

����˵����memchr()��ͷ��ʼ��Ѱs ��ָ���ڴ�����ǰn ���ֽڣ�ֱ�����ֵ�һ��ֵΪc ���ֽڣ��򷵻�ָ����ֽڵ�ָ�롣

����ֵ������ҵ�ָ�����ֽ��򷵻ظ��ֽڵ�ָ�룬���򷵻�0��

*/

#include <string.h>
#include <stdio.h>

int main()
{
    char *s = "0123456789012345678901234567890";
    char *p = NULL;
    p = memchr(s, '5', 10);
    printf("%s\n", p);
}

