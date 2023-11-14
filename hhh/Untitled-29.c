#include <stdio.h>
//只接收数字字符
int main()
{
    int ch=0;
    whlie((ch=getchar())!=EOF)
    {
        if(ch<'0' || ch>'9')
            continue;
            putchar(ch);       
    }
    return 0;
}