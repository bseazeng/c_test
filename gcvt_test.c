/*
ͷ�ļ���#include <stdlib.h>

���庯����char *gcvt(double number, size_t ndigits, char *buf);

����˵����gcvt()����������number ת����ASCII ���ַ���������ndigits ��ʾ��ʾ��λ����gcvt()��ecvt()��fcvt()��ͬ�ĵط����ڣ�gcvt()��ת������ַ�������С������������š���ת���ɹ���ת������ַ�������ڲ���buf ָ����ָ�Ŀռ䡣

*/


#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    char str[25];
    double num;
    int sig = 5; /* significant digits */
    /* a regular number */
    num = 9.876;
    gcvt(num, sig, str);
     
	printf("string = %s\n", str);
    /* a negative number */
    num = -123.4567;
    gcvt(num, sig, str);
     
	printf("string = %s\n", str);
    /* scientific notation */
    num = 0.678e5;
    gcvt(num, sig, str);
     
	printf("string = %s\n", str);
    return(0);
}
 


