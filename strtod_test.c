/*
ͷ�ļ���#include <stdlib.h>

���� strtod() �������ַ���ת����˫���ȸ�����(double)����ԭ��Ϊ��
double strtod (const char* str, char** endptr);

������˵����str ΪҪת�����ַ�����endstr Ϊ��һ������ת�����ַ���ָ�롣

������˵����strtod() ������ɨ�����str�ַ���������ǰ��Ŀհ��ַ�������ո�tab�����ȣ�����ͨ�� isspace() ��������⣩��ֱ���������ֻ��������Ųſ�ʼ��ת���������ַ����ֻ��ַ�������ʱ('\0')�Ž���ת��������������ء����� str �ַ����ɰ��������š�С�����E(e)����ʾָ�����֡���123. 456 ��123e-2��

��endptr ��ΪNULL����Ὣ�����Ĳ�������������ֹ���ַ�ָ���� endptr ���أ��� endptr Ϊ NULL�����ʾ�ò�����Ч����ʹ�øò�����

������ֵ������ת����ĸ���������������ת�����ַ���Ϊ�գ��򷵻� 0.0��

��ܰ��ʾ��ANSI C �淶������ stof()��atoi()��atol()��strtod()��strtol()��strtoul() ��6�����Խ��ַ���ת��Ϊ���ֵĺ�������ҿ��ԶԱ�ѧϰ��ʹ�� strtod(str, NULL) ��ʹ�� atof() �����ͬ�������� C99 / C++11 �淶����������5���������ֱ��� atoll()��strtof()��strtold()��strtoll()��strtoull()���ڴ˲������ܣ���������ѧϰ��

*/

#include <stdio.h>
#include <stdlib.h>
void printChinese(const char*content)
{
	if ( NULL == content )
	{
	    return;
	}
	int len = strlen(content);
	int i = 0;
	for(i=0;i<len;i++)
	{
		
	}
}
int main(void)
{
	char szOrbits[] = "365.24 29.53";
	char* pEnd = NULL;
	double d1 = 0;
	double d2 = 0;
	d1 = strtod (szOrbits, &pEnd);
	d2 = strtod (pEnd, NULL);
	printChinese("����ÿ���Ƶ�������\n");
	printf ("����ÿ���Ƶ������� %.2f �ܡ�\n", d1/d2);
	return 0;
}

