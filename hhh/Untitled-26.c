#include <stdio.h>
//输出1-100之间的奇数
//方法一（whlie语句）
/*
int main()
{
    int i = 1;
    while(i<=100)
    {
        if(i%2==1)
            printf("%d",i);
            i++;
    }
    return 0;
}
*/
//方法二（for语句）
int main()
{
    int i = 0;
    int count = 0;
    for(i=1;i<=100;i++)
    {
        if(i%2==1)
        {   
            printf("%d ",i);
            count++;
        }
    }
    printf("\n有%d个数",count);
    return 0;
}