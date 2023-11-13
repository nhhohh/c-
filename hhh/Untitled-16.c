#include <stdio.h>
#include <string.h>
int main()
{
    printf("%d\n",strlen("c:\test\32\test.c"));
    return 0;
}//13
// \32--32是2个八进制数字
// 32代表八进制代表的那个十进制数字，作为ASCII码值，对应的字符
// 32--十进制为26--作为ASCII码值代表的字符"->",即3*8^1+2*8^0=26