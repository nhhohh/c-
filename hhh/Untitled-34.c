#include <stdio.h>
//计算1!+2!+...+10!
int main()
{
    int i=0;
    int n=0;
    int ret=1;
    int sum=0;
    for(n=1;n<=10;n++)
    {
        ret = ret * n;
        sum = sum + ret;
    }
    printf("sum=%d\n",sum);
    return 0;
}