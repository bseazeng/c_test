/*
ͷ�ļ���#include <string.h>

���庯����char * strdup(const char *s);

����˵����strdup()������maolloc()���������s �ַ�����ͬ�Ŀռ��С��Ȼ�󽫲���s �ַ��������ݸ��Ƶ����ڴ��ַ��Ȼ��Ѹõ�ַ���ء��õ�ַ����������free()���ͷš�

����ֵ������һ�ַ���ָ�룬��ָ��ָ���ƺ�����ַ�����ַ��������NULL ��ʾ�ڴ治�㡣

*/

#include <string.h>
#include <stdio.h>
int main()
{
	char a[] = "strdup";
	char *b  = NULL;
	b = strdup(a);

	if(NULL != b)
		printf("b[]=\"%s\"\n", b);

	return 0;
}

