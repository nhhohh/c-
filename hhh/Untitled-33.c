#include <stdio.h>
//计算n的阶乘（不考虑溢出）
int main()
{
    int i=0;
    int n=0;
    int ret=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        ret = ret * i;
    }
    printf("ret=%d\n",ret);
    return 0;
}