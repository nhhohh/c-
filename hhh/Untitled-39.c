#include <stdio.h>
//写一个代码打印1-100之间所有3的倍数的数字
int main()
{
    int i =0;
    int count=0;
    for(i=1;i<=100;i++)
    {
        if(i%3==0)
            {   
                count++;
                printf("%d ",i);
            }
    }
    printf("\n count=%d",count);
    return 0;
}