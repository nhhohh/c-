#include <stdio.h>
//求两个数的较大值

//方法一：自定义函数
/*
int Max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
int main()
{
    int num1 = 10;
    int num2 = 20;
    int max = 0;
    max = Max(num1,num2);
    printf("max=%d\n",max);
    return 0;
}
*/
//方法二
/*
int main()
{
    int num1 = 10;
    int num2 = 20;
    if(num1>num2)
        printf("较大值=%d\n",num1);
    else
        printf("较大值=%d\n",num2);
    return 0;
}
*/
//方法三：定义宏
#define Max(x,y)(x>y?x:y)
int main()
{
    int a = 10;
    int b = 20;
    int max = Max(a,b);//max=(a>b?a:b)
    printf("max=%d\n",max);
    return 0;   
}