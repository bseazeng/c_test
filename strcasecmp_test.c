/*
ͷ�ļ���#include <string.h>

���庯����int strcasecmp (const char *s1, const char *s2);

����˵����strcasecmp()�����Ƚϲ���s1 ��s2 �ַ������Ƚ�ʱ���Զ����Դ�Сд�Ĳ��졣

����ֵ��������s1 ��s2 �ַ�����ͬ�򷵻�0��s1 ���ȴ���s2 �����򷵻ش���0 ��ֵ��s1 ������С��s2 �����򷵻�С��0 ��ֵ��

*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(void )
{
    char *a = "aBcDeF";
    char *b = "AbCdEf";
	
    if(!strcasecmp(a, b))
   		printf("%s=%s\n", a, b);
	
	return 0;
}

