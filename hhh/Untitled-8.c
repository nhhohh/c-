#include <stdio.h>
/*int main()
{
    const int num = 4;//const-常属性，修饰的常变量
    printf("%d\n",num);
    num=8;
    printf("%d\n",num);
    return 0;
}*/ //报错  num=4不能被改变
/*int main()
{
    const int n = 10;//n是变量，但又有常属性，所以n是常变量
    int arr[n]={0};
    return 0;
}*/ //报错
#define MAX 10//#define定义标识符的常量
int main()
{
    int arr [MAX];
    printf("%d\n",MAX);
    return 0;
}