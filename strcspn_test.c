/*
ͷ�ļ���#inclued<string.h>

strcspn() ���������ַ��� str �������м����ַ����������ַ��� accept����ԭ��Ϊ��
    int strcspn(char *str, char *accept);

������˵����str��acceptΪҪ���в��ҵ������ַ�����

strcspn() ���ַ��� str �Ŀ�ͷ�����������ַ�������Щ�ַ�����ȫ�����ַ��� accept �С��򵥵�˵���� strcspn() ���ص���ֵΪ n��������ַ��� str ��ͷ������ n ���ַ��������ַ��� accept �е��ַ���

������ֵ�������ַ��� str ��ͷ���������ַ��� accept �ڵ��ַ���Ŀ��

ע�⣺��� str �е��ַ���û���� accept �г��֣���ô������ atr �ĳ��ȣ��������ַ������ִ�Сд�ġ�

��ʾ������ strspn() �ĺ����� strcspn() �෴�����ԶԱ�ѧϰ��

*/
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	char* s1 = "http://c.biancheng.net/cpp/u/biaozhunku/";
	char* s2 = "c is good";
	int n = strcspn(s1,s2);
	printf("The first char both in s1 and s2 is :%c\n",s1[n]);	
	printf("The position in s1 is: %d\n",n);
	return 0;
}

