/*
ͷ�ļ���#include <unistd.h>

���庯����size_t getpagesize(void);

����˵��������һ��ҳ�Ĵ�С����λΪ�ֽ�(byte)����Ϊϵͳ�ķ�ҳ��С����һ�����Ӳ����ҳ��С��ͬ��

����ֵ���ڴ��ҳ��С��

����˵������ Intel x86 ���䷵��ֵӦΪ4096bytes��

*/
#include <unistd.h>
#include <stdio.h>
int main()
{
	printf("page size = %d byte\n", getpagesize());
}

