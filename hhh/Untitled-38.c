#include <stdio.h>
//编写代码将三个数从大到小输出
int main()
{
    int a=0;
    int b=0;
    int c=0;
    scanf("%d%d%d",&a,&b,&c);//算法实现：a中放最大，b次之，c中放最小
    if(a<b)
    {
        int tmp=a;
        a=b;
        b=tmp;
    }
    if(a<c)
    {
        int tmp=a;
        a=c;
        c=tmp;
    }
    if(b<c)
    {
        int tmp=b;
        b=c;
        c=tmp;
    }
    printf("%d %d %d\n",a,b,c);
    return 0;
}