#include <stdio.h>
//写一个代码求两数的最大公约数
int main()
{
    int m=0;
    int n=0;
    int r=0;
    scanf("%d%d",&m,&n);
    while(r=m%n)
    {
        m=n;
        n=r;
    }
    printf("%d\n",n);
    return 0;
}