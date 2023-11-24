#include <stdio.h>
//写一个代码，打印100-200之间的素数
//算法实现：i=a*b,a和b中至少有一个数字<=开平方i
#include <math.h>
int main()
{
    int i=0;
    int count=0;
    for(i=101;i<=200;i+=2)
    {
        int j=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j>sqrt(i))
        {
            count++;
            printf("%d ",i);
        }
    }
    printf("\n count=%d\n",count);
    return 0;
}