#include <stdio.h>
//编写程序数一下1-100的所有整数中出现多少个数字9
int main()
{
    int i=0;
    int count=0;
    for(i=1;i<=100;i++)
    {
        if(i%10==9)
        count++;
        if(i/10==9)
        count++;
    }
    printf("count=%d\n",count);
    return 0;
}