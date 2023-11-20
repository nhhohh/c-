#include <stdio.h>
//写一个代码求两数的最大公约数
//算法实现：辗转相除法 
//eg.m=24,n=18 24%18=6 18%6=0
//则6为两数的最大公约数
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
        break;
    }
    printf("%d\n",n);
    return 0;                         
}